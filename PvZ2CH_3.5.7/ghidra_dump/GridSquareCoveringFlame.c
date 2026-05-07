// Class: GridSquareCoveringFlame


/* GridSquareCoveringFlame::getPamName() */

char * GridSquareCoveringFlame::getPamName(void)

{
  return "POPANIM_EFFECTS_ZOMBOSS_DARK_FIREBALL";
}


/* GridSquareCoveringFlame::getImpactAnimName() */

char * GridSquareCoveringFlame::getImpactAnimName(void)

{
  return "impact";
}


/* GridSquareCoveringFlame::getDPS() */

undefined4 GridSquareCoveringFlame::getDPS(void)

{
  return 0x459c4000;
}


/* GridSquareCoveringFlame::getDamageableEntityFlags() */

undefined8 GridSquareCoveringFlame::getDamageableEntityFlags(void)

{
  return 1;
}


/* GridSquareCoveringFlame::isTargettableZombie(Zombie const*) */

byte __thiscall
GridSquareCoveringFlame::isTargettableZombie(GridSquareCoveringFlame *this,Zombie *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::addStartingAnimationSequence(Effect_PopAnim*) */

void __thiscall
GridSquareCoveringFlame::addStartingAnimationSequence
          (GridSquareCoveringFlame *this,Effect_PopAnim *param_1)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(*(long *)this + 0x200))();
  std::string::string(asStack_10,__s);
  Effect_PopAnim::PlaySingleAnimation(param_1,asStack_10,2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::getRenderOrder() */

void __thiscall GridSquareCoveringFlame::getRenderOrder(GridSquareCoveringFlame *this)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(this + 0xb8),0);
  return;
}


/* GridSquareCoveringFlame::canHitZombies() */

void __thiscall GridSquareCoveringFlame::canHitZombies(GridSquareCoveringFlame *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::StaticClassInit() */

void GridSquareCoveringFlame::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareCoveringFlame");
    (*pcVar2)(plVar1,asStack_10,FUN_03e82b34,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::StaticGetClass() */

long * GridSquareCoveringFlame::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareCoveringFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareCoveringFlame::GetClass() const */

long * GridSquareCoveringFlame::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareCoveringFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::getScorchEffectResourceID(GridSquareCoveringFlame::ScorchType) */

void __thiscall GridSquareCoveringFlame::getScorchEffectResourceID(string *param_1,int param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_2 == 1) {
    __s = "POPANIM_EFFECTS_SCORCHED_EARTH";
  }
  else if (param_2 == 0) {
    __s = "POPANIM_EFFECTS_SCORCHED_EARTH_TILE";
  }
  else {
    if (param_2 != 2) goto LAB_03e821a0;
    __s = "POPANIM_EFFECTS_SCORCHED_EARTH_EDGE";
  }
  std::string::string(param_1,__s);
  nop();
LAB_03e821a0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::getScorchEffect(GridSquareCoveringFlame::ScorchType) */

void GridSquareCoveringFlame::getScorchEffect(undefined8 param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getScorchEffectResourceID((GridSquareCoveringFlame *)asStack_10);
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* GridSquareCoveringFlame::~GridSquareCoveringFlame() */

void __thiscall GridSquareCoveringFlame::~GridSquareCoveringFlame(GridSquareCoveringFlame *this)

{
  *(undefined ***)this = &PTR_GetClass_0678e3d0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareCoveringFlame_0678e610;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to GridSquareCoveringFlame::~GridSquareCoveringFlame() */

void __thiscall GridSquareCoveringFlame::~GridSquareCoveringFlame(GridSquareCoveringFlame *this)

{
  ~GridSquareCoveringFlame(this + -0x10);
  return;
}


/* GridSquareCoveringFlame::~GridSquareCoveringFlame() */

void __thiscall GridSquareCoveringFlame::~GridSquareCoveringFlame(GridSquareCoveringFlame *this)

{
  ~GridSquareCoveringFlame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareCoveringFlame::~GridSquareCoveringFlame() */

void __thiscall GridSquareCoveringFlame::~GridSquareCoveringFlame(GridSquareCoveringFlame *this)

{
  ~GridSquareCoveringFlame(this + -0x10);
  return;
}


/* GridSquareCoveringFlame::GridSquareCoveringFlame() */

void __thiscall GridSquareCoveringFlame::GridSquareCoveringFlame(GridSquareCoveringFlame *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678e3d0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareCoveringFlame_0678e610;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  Sexy::Point::Point((Point *)(this + 0xb4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = uVar1;
  *(undefined4 *)(this + 0xd0) = uVar1;
  return;
}


/* GridSquareCoveringFlame::StaticNew() */

GridSquareCoveringFlame * GridSquareCoveringFlame::StaticNew(void)

{
  GridSquareCoveringFlame *this;
  
  this = ::operator_new(0xd8);
  GridSquareCoveringFlame(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::SetOwner(BoardEntity*) */

void __thiscall
GridSquareCoveringFlame::SetOwner(GridSquareCoveringFlame *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 200),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 200),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::onDestroy() */

void __thiscall GridSquareCoveringFlame::onDestroy(GridSquareCoveringFlame *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0xc0);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::tryPlayScorchedGridOutro() */

void __thiscall GridSquareCoveringFlame::tryPlayScorchedGridOutro(GridSquareCoveringFlame *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_10,"animation3");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::SetEndOfLifeTime(float) */

void __thiscall
GridSquareCoveringFlame::SetEndOfLifeTime(GridSquareCoveringFlame *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (param_1 < fVar1) {
    fVar1 = (float)PVZ_T();
    fVar1 = fVar1 + param_1;
  }
  *(float *)(this + 0xb0) = fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::StartFlameImpactEffect(Sexy::Point, float, BoardEntity*) */

void __thiscall
GridSquareCoveringFlame::StartFlameImpactEffect
          (float param_1,GridSquareCoveringFlame *this,undefined8 *param_3,BoardEntity *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  Effect_PopAnim *this_00;
  char *__s;
  PopAnim *pPVar3;
  Point *extraout_x1;
  float fVar4;
  int local_30;
  int local_2c;
  string asStack_28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb4) = *param_3;
  SetEndOfLifeTime(this,param_1);
  SetOwner(this,param_4);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  __s = (char *)(**(code **)(*(long *)this + 0x1f8))(this);
  std::string::string(asStack_28,__s);
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_28);
  nop();
  (**(code **)(*(long *)this + 0x218))(this,this_00);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xb4),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_28);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_28,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  uVar2 = (**(code **)(*(long *)this + 0x1e8))(this);
  FUN_03e81f7c(this_00 + 0x1c,uVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0xd0) = fVar4 + 0.4;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::registerForEvents() */

void __thiscall GridSquareCoveringFlame::registerForEvents(GridSquareCoveringFlame *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f0);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<GridSquareCoveringFlame,void(GridSquareCoveringFlame::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::StartScorchEffect(Sexy::Point, float, BoardEntity*,
   GridSquareCoveringFlame::ScorchType) */

void __thiscall
GridSquareCoveringFlame::StartScorchEffect
          (float param_1,GridSquareCoveringFlame *this,undefined8 *param_3,BoardEntity *param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  PopAnimRig *this_01;
  Point *extraout_x1;
  float fVar3;
  float fVar4;
  int local_48;
  int local_44;
  Vec3 aVStack_40 [16];
  string asStack_30 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb4) = *param_3;
  fVar3 = (float)PVZ_EOT();
  fVar4 = fVar3;
  if (param_1 < fVar3) {
    fVar4 = (float)PVZ_T();
    fVar4 = fVar4 + param_1;
  }
  *(float *)(this + 0xb0) = fVar4;
  SetOwner(this,param_4);
  *(float *)(this + 0xd0) = fVar3;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  getScorchEffect(aRStack_20,param_5);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_30,"animation2");
  AnimationSequence::AddLoopingAnimation(fVar3,aRStack_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_20);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::RandomizeCurrentAnimFrame(this_01);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xb4),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_48,(TPoint *)aVStack_40);
  EATextSquish::Vec3::Vec3(aVStack_40,(float)local_48,(float)local_44,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_40,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  uVar1 = Board::MakeGroundRenderOrder(*(int *)(this + 0xb8),1);
  FUN_03e81f7c(this_00 + 0x1c,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0),(RtWeakPtrBase *)aVStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::tryCreateGridScorchEffect() */

void __thiscall GridSquareCoveringFlame::tryCreateGridScorchEffect(GridSquareCoveringFlame *this)

{
  char cVar1;
  undefined4 uVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  Point *extraout_x1;
  float fVar4;
  undefined8 uVar5;
  int local_48;
  int local_44;
  Vec3 aVStack_40 [16];
  string asStack_30 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x208))();
  if ((cVar1 != '\0') && (fVar4 = (float)PVZ_T(), *(float *)(this + 0xd0) < fVar4)) {
    uVar5 = PVZ_EOT();
    *(int *)(this + 0xd0) = (int)uVar5;
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    getScorchEffect(aRStack_20,0);
    pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::string::string(asStack_30,"animation");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"animation2");
    AnimationSequence::AddLoopingAnimation(uVar5,aRStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_20);
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xb4),extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_48,(TPoint *)aVStack_40);
    EATextSquish::Vec3::Vec3(aVStack_40,(float)local_48,(float)local_44,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_40,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    uVar2 = Board::MakeGroundRenderOrder(*(int *)(this + 0xb8),1);
    FUN_03e81f7c(this_00 + 0x1c,uVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0),(RtWeakPtrBase *)aVStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::onUpdate() */

void __thiscall GridSquareCoveringFlame::onUpdate(GridSquareCoveringFlame *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtObject *pRVar5;
  undefined8 *puVar6;
  Plant *this_00;
  Zombie *pZVar7;
  RtObject *this_01;
  float fVar8;
  float fVar9;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x210) == getDPS) {
    fVar8 = (float)getDPS();
  }
  else {
    fVar8 = (float)(**(code **)(*(long *)this + 0x210))();
  }
  fVar9 = (float)PVZ_Dt();
  uVar3 = operator|(0x400,0x400000);
  uVar3 = operator|(uVar3,0x1000);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::Point::Point((Point *)&local_88,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * fVar8),local_80,local_7c,aDStack_68,uVar3,uVar4,
             (Point *)&local_88,0);
  cVar1 = (**(code **)(*(long *)this + 0x1e0))(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  if (*(code **)(*(long *)this + 0x220) == getDamageableEntityFlags) {
    local_94 = getDamageableEntityFlags();
  }
  else {
    local_94 = (**(code **)(*(long *)this + 0x220))(this);
  }
  if (cVar1 != '\0') {
    operator|=(&local_94,2);
  }
  EntityFinder::GetEntitiesAtGridSquare
            ((FastCurve *)&local_80,local_94,*(undefined4 *)(this + 0xb4),
             *(undefined4 *)(this + 0xb8));
  pRVar5 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_01 = (RtObject *)*puVar6;
    if (this_01 != pRVar5) {
      this_00 = Sexy::RtObject::Cast<Plant>(this_01);
      if ((this_00 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(this_00,false), cVar1 == '\0'))
      {
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_01);
      if ((pZVar7 != (Zombie *)0x0) &&
         (cVar1 = (**(code **)(*(long *)this + 0x228))(this,pZVar7), cVar1 != '\0')) {
        (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0xb0) < fVar8) {
    tryPlayScorchedGridOutro(this);
    (**(code **)(*(long *)this + 0x1d8))(this);
  }
  tryCreateGridScorchEffect(this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringFlame::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GridSquareCoveringFlame::onGatherPlantingRestrictions
          (GridSquareCoveringFlame *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)(this + 0xb4));
  if (cVar1 != '\0') {
    local_c = 0x26;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringFlame::GetGridLocation() const */

GridSquareCoveringFlame * __thiscall
GridSquareCoveringFlame::GetGridLocation(GridSquareCoveringFlame *this)

{
  return this + 0xb4;
}

