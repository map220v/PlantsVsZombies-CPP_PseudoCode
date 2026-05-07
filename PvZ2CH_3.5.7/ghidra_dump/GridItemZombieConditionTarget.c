// Class: GridItemZombieConditionTarget


/* GridItemZombieConditionTarget::onGridItemInitialize() */

void __thiscall
GridItemZombieConditionTarget::onGridItemInitialize(GridItemZombieConditionTarget *this)

{
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* GridItemZombieConditionTarget::onDestroy() */

void __thiscall GridItemZombieConditionTarget::onDestroy(GridItemZombieConditionTarget *this)

{
  GridItem::onDestroy((GridItem *)this);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x1f0));
  return;
}


/* GridItemZombieConditionTarget::ShouldClipWithWater() const */

char GridItemZombieConditionTarget::ShouldClipWithWater(void)

{
  char cVar1;
  
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    cVar1 = PVZ1ModeUtils::IsPoolStage();
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* GridItemZombieConditionTarget::GridItemZombieConditionTarget() */

void __thiscall
GridItemZombieConditionTarget::GridItemZombieConditionTarget(GridItemZombieConditionTarget *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06786300;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieConditionTarget_06786608;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1f0));
  return;
}


/* GridItemZombieConditionTarget::StaticNew() */

GridItemZombieConditionTarget * GridItemZombieConditionTarget::StaticNew(void)

{
  GridItemZombieConditionTarget *this;
  
  this = ::operator_new(0x210);
  GridItemZombieConditionTarget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieConditionTarget::StaticClassInit() */

void GridItemZombieConditionTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieConditionTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_03e226ac,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieConditionTarget::StaticGetClass() */

long * GridItemZombieConditionTarget::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieConditionTarget::GetClass() const */

long * GridItemZombieConditionTarget::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieConditionTarget::updateGroundEffect() */

void __thiscall
GridItemZombieConditionTarget::updateGroundEffect(GridItemZombieConditionTarget *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_03e222fc(this[0x1f8]);
  if (cVar1 == '\0') {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar2);
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) ||
       (0.0 < *(float *)(pSVar2 + 8))) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x1f0),this,uVar3,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieConditionTarget::MoveOverTimeTo(Sexy::Point const&, float) */

void __thiscall
GridItemZombieConditionTarget::MoveOverTimeTo
          (GridItemZombieConditionTarget *this,Point *param_1,float param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  Zombie *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::MoveOverTimeTo
            ((GridItemBoardEntityConditionTarget *)this,param_1,param_2);
  GridItemBoardEntityConditionTarget::GetOwner();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar2);
    if (bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>(pRVar2);
      Zombie::SetIsControlled(this_00,true);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieConditionTarget::onKilled() */

void __thiscall GridItemZombieConditionTarget::onKilled(GridItemZombieConditionTarget *this)

{
  char cVar1;
  RtObject *this_00;
  Zombie *pZVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::GetOwner();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((cVar1 != '\0') && (*(int *)(this + 0x1e8) != -1)) {
    GridItemBoardEntityConditionTarget::GetOwner();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = Sexy::RtObject::Cast<Zombie>(this_00);
    Zombie::EndCondition(pZVar2,*(undefined4 *)(this + 0x1e8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieConditionTarget::updatePosition() */

void GridItemZombieConditionTarget::updatePosition(void)

{
  char cVar1;
  GridItemAnimation *in_x0;
  GridItemBoardEntityConditionTargetProps *pGVar2;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  GameObject *this_01;
  SexyVector3 *this_02;
  SexyVector3 *pSVar3;
  code *pcVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float fVar6;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_18 [2];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  GridItemBoardEntityConditionTarget::GetOwner();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (cVar1 != '\0') {
    GridItemBoardEntityConditionTarget::GetOwner();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    cVar1 = GameObject::IsDestroyed(this_01);
    if ((cVar1 != '\0') ||
       ((*(int *)(in_x0 + 0x1e8) == 0x65 &&
        (((fVar5 = (float)FUN_03e2231c(*(undefined4 *)(this_01 + 0x280)), fVar5 == 0.0 ||
          (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 != '\0')) ||
         (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 != '\0')))))) {
      (**(code **)(*(long *)in_x0 + 0x48))();
    }
    cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
    if (cVar1 == '\0') {
      fVar5 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
      fVar6 = 0.0;
      pcVar4 = *(code **)(*(long *)this_01 + 0x78);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar5,in_s1,0.0);
      (*pcVar4)(this_01,(RtMixedPtrBase *)local_18);
      BoardEntity::CalcGridPosition();
      GridItem::SetGridLocationUnbounded();
      this_02 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)in_x0);
      local_18[0] = Sexy::SexyVector3::operator-(this_02,pSVar3);
      local_10 = fVar6;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)local_18);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_28,local_24 - local_20);
      FUN_03e22308(local_18[0],in_x0 + 0x1a8);
      in_s2 = local_24;
    }
    else {
      Zombie::SetIsControlled((Zombie *)this_01,false);
    }
  }
  cVar1 = GridItemAnimation::HasLinkedAnimRig(in_x0);
  if (cVar1 != '\0') {
    pGVar2 = GridItem::GetProps<GridItemBoardEntityConditionTargetProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
    if (this != (AttachedEffect *)0x0) {
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      local_18[0] = Sexy::SexyVector3::operator+
                              ((SexyVector3 *)(pGVar2 + 0xc0),(SexyVector3 *)&local_28);
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
/* GridItemZombieConditionTarget::onUpdate() */

void __thiscall GridItemZombieConditionTarget::onUpdate(GridItemZombieConditionTarget *this)

{
  char cVar1;
  long *extraout_x0;
  RtMixedPtrBase aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  GridItemBoardEntityConditionTarget::GetOwner();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (cVar1 != '\0') {
    GridItemBoardEntityConditionTarget::GetOwner();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    if ((((*(int *)(this + 0x1e8) == 0x65) &&
         (cVar1 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar1 == '\0')) &&
       ((cVar1 = Zombie::HasCondition(extraout_x0,0x6b), cVar1 != '\0' ||
        (cVar1 = Zombie::HasCondition(extraout_x0,0x6c), cVar1 != '\0')))) {
      Zombie::calcEatDamageSuspended();
      (**(code **)(*(long *)this + 0x110))(this,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  updateGroundEffect(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemZombieConditionTarget::~GridItemZombieConditionTarget() */

void __thiscall
GridItemZombieConditionTarget::~GridItemZombieConditionTarget(GridItemZombieConditionTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_06786300;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieConditionTarget_06786608;
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1f0));
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemZombieConditionTarget::~GridItemZombieConditionTarget() */

void __thiscall
GridItemZombieConditionTarget::~GridItemZombieConditionTarget(GridItemZombieConditionTarget *this)

{
  ~GridItemZombieConditionTarget(this + -0x10);
  return;
}


/* GridItemZombieConditionTarget::~GridItemZombieConditionTarget() */

void __thiscall
GridItemZombieConditionTarget::~GridItemZombieConditionTarget(GridItemZombieConditionTarget *this)

{
  ~GridItemZombieConditionTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieConditionTarget::~GridItemZombieConditionTarget() */

void __thiscall
GridItemZombieConditionTarget::~GridItemZombieConditionTarget(GridItemZombieConditionTarget *this)

{
  ~GridItemZombieConditionTarget(this + -0x10);
  return;
}

