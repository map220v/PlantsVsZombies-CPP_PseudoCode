// Class: GridItemBoardEntityConditionTarget


/* GridItemBoardEntityConditionTarget::GetOwner() */

RtWeakPtr<Sexy::SoundResource> * GridItemBoardEntityConditionTarget::GetOwner(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x1c8));
  return in_x8;
}


/* GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget() */

void __thiscall
GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
          (GridItemBoardEntityConditionTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_06785c80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBoardEntityConditionTarget_06785f88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget() */

void __thiscall
GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
          (GridItemBoardEntityConditionTarget *this)

{
  ~GridItemBoardEntityConditionTarget(this + -0x10);
  return;
}


/* GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget() */

void __thiscall
GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
          (GridItemBoardEntityConditionTarget *this)

{
  ~GridItemBoardEntityConditionTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget() */

void __thiscall
GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
          (GridItemBoardEntityConditionTarget *this)

{
  ~GridItemBoardEntityConditionTarget(this + -0x10);
  return;
}


/* GridItemBoardEntityConditionTarget::tryUpdatePosition() */

void __thiscall
GridItemBoardEntityConditionTarget::tryUpdatePosition(GridItemBoardEntityConditionTarget *this)

{
  (**(code **)(*(long *)this + 0x2e0))();
  return;
}


/* GridItemBoardEntityConditionTarget::onUpdate() */

void __thiscall
GridItemBoardEntityConditionTarget::onUpdate(GridItemBoardEntityConditionTarget *this)

{
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  (**(code **)(*(long *)this + 0x2d8))(this);
  return;
}


/* GridItemBoardEntityConditionTarget::IsControlled() const */

undefined8 __thiscall
GridItemBoardEntityConditionTarget::IsControlled(GridItemBoardEntityConditionTarget *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x2f0))();
  if (cVar1 != '\0') {
    uVar2 = GridItemBreakableTarget::IsControlled((GridItemBreakableTarget *)this);
    return uVar2;
  }
  return 1;
}


/* GridItemBoardEntityConditionTarget::SetIsControlled(bool) */

void __thiscall
GridItemBoardEntityConditionTarget::SetIsControlled
          (GridItemBoardEntityConditionTarget *this,bool param_1)

{
  this[0x1be] = (GridItemBoardEntityConditionTarget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTarget::StaticClassInit() */

void GridItemBoardEntityConditionTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBoardEntityConditionTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2118c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBoardEntityConditionTarget::StaticGetClass() */

long * GridItemBoardEntityConditionTarget::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBoardEntityConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBoardEntityConditionTarget::GetClass() const */

long * GridItemBoardEntityConditionTarget::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBoardEntityConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBoardEntityConditionTarget::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
GridItemBoardEntityConditionTarget::SetOwner
          (GridItemBoardEntityConditionTarget *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),param_2);
  (**(code **)(*(long *)this + 0x2d8))(this);
  return;
}


/* GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget() */

void __thiscall
GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
          (GridItemBoardEntityConditionTarget *this)

{
  undefined4 uVar1;
  
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06785c80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBoardEntityConditionTarget_06785f88;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1d0) = uVar1;
  *(undefined4 *)(this + 0x1d4) = uVar1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e0));
  return;
}


/* GridItemBoardEntityConditionTarget::StaticNew() */

GridItemBoardEntityConditionTarget * GridItemBoardEntityConditionTarget::StaticNew(void)

{
  GridItemBoardEntityConditionTarget *this;
  
  this = ::operator_new(0x1e8);
  GridItemBoardEntityConditionTarget(this);
  return this;
}


/* GridItemBoardEntityConditionTarget::CalcRenderOrder() const */

ulong __thiscall
GridItemBoardEntityConditionTarget::CalcRenderOrder(GridItemBoardEntityConditionTarget *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c8));
  if (cVar1 == '\0') {
    uVar3 = GridItemBreakableTarget::CalcRenderOrder();
    return uVar3;
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  iVar2 = (**(code **)(*plVar4 + 0x170))();
  return (ulong)(iVar2 + 1);
}


/* non-virtual thunk to GridItemBoardEntityConditionTarget::CalcRenderOrder() const */

void __thiscall
GridItemBoardEntityConditionTarget::CalcRenderOrder(GridItemBoardEntityConditionTarget *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTarget::MoveOverTimeTo(Sexy::Point const&, float) */

void __thiscall
GridItemBoardEntityConditionTarget::MoveOverTimeTo
          (GridItemBoardEntityConditionTarget *this,Point *param_1,float param_2)

{
  Point *pPVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  undefined8 local_10;
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  fVar2 = (float)PVZ_T();
  uVar4 = *(undefined4 *)(this + 0x1c);
  *(float *)(this + 0x1d0) = fVar2;
  *(float *)(this + 0x1d4) = fVar2 + param_2;
  uVar3 = FUN_03e209c0(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x1d8) = uVar3;
  *(undefined4 *)(this + 0x1dc) = uVar4;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)local_18,(float)local_14);
  pPVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1e0) = local_10;
  if (local_8 == pPVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBoardEntityConditionTarget::isDoneMoving() const */

bool __thiscall
GridItemBoardEntityConditionTarget::isDoneMoving(GridItemBoardEntityConditionTarget *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  bVar1 = true;
  if (fVar2 < *(float *)(this + 0x1d4)) {
    fVar2 = (float)PVZ_EOT();
    bVar1 = *(float *)(this + 0x1d0) == fVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTarget::updatePosition() */

void GridItemBoardEntityConditionTarget::updatePosition(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemAnimation *in_x0;
  GridItemBoardEntityConditionTargetProps *pGVar4;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  float fVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  undefined4 in_s2;
  float local_28;
  float local_24;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1c8));
  if (cVar1 == '\0') {
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
    if (cVar1 == '\0') {
      fVar5 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar5);
      iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(in_s1);
      Sexy::Point::Point((Point *)local_18,iVar2,iVar3);
      GridItem::SetGridLocationUnbounded();
      fVar7 = *(float *)(in_x0 + 0x1c);
      fVar6 = (float)FUN_03e209c0(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20))
      ;
      in_s2 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar5 - fVar6,in_s1 - fVar7,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)local_18);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_28,local_24);
      FUN_03e209a8(local_18[0],in_x0 + 0x1a8);
    }
    cVar1 = GridItemAnimation::HasLinkedAnimRig(in_x0);
    if (cVar1 != '\0') {
      pGVar4 = GridItem::GetProps<GridItemBoardEntityConditionTargetProps>();
      this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      local_18[0] = Sexy::SexyVector3::operator+
                              ((SexyVector3 *)(pGVar4 + 0xc0),(SexyVector3 *)&local_28);
      local_10 = in_s2;
      StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTarget::getNextBoardPosition() */

void __thiscall
GridItemBoardEntityConditionTarget::getNextBoardPosition(GridItemBoardEntityConditionTarget *this)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c8));
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
    uVar5 = *(undefined4 *)(lVar2 + 0x1c);
    uVar3 = FUN_03e209c0(*(undefined4 *)(lVar2 + 0x18),uVar5,*(undefined4 *)(lVar2 + 0x20));
    local_10 = CONCAT44(uVar5,uVar3);
  }
  else {
    local_10 = *(undefined8 *)(this + 0x1d8);
  }
  uVar5 = *(undefined4 *)(this + 0x1d0);
  uVar4 = (ulong)*(uint *)(this + 0x1d4);
  uVar3 = PVZ_T();
  uVar3 = CurveLerp<Sexy::SexyVector2>(uVar5,uVar4,uVar3,&local_10,this + 0x1e0,1);
  local_10 = CONCAT44((int)uVar4,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,uVar4 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTarget::OverrideProjectileCollision(Projectile*) */

void __thiscall
GridItemBoardEntityConditionTarget::OverrideProjectileCollision
          (GridItemBoardEntityConditionTarget *this,Projectile *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  string *psVar5;
  long lVar6;
  RtWeakPtrBase aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_03e209a4(*(undefined4 *)(param_1 + 0x24));
  cVar1 = RealObject::IsOnTeam(this,uVar4);
  if (cVar1 != '\0') {
    GridItem::GetType();
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    std::string::string(asStack_18,"planttarget_iceblock");
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    if (cVar2 != '\0') {
      lVar6 = Projectile::GetProps(param_1);
      bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(lVar6 + 0x30),0x1000000000);
      cVar1 = !bVar3;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

