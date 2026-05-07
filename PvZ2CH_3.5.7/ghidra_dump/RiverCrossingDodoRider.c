// Class: RiverCrossingDodoRider


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::onInitialized() */

void __thiscall RiverCrossingDodoRider::onInitialized(RiverCrossingDodoRider *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GameObject::Create<ComponentRunner>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::SetNextPosition(Sexy::SexyVector3) */

void RiverCrossingDodoRider::SetNextPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  SexyVector3 *pSVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xa4),pSVar1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xb0),(SexyVector3 *)&local_10);
  return;
}


/* RiverCrossingDodoRider::GetNextPosition() */

undefined4 __thiscall RiverCrossingDodoRider::GetNextPosition(RiverCrossingDodoRider *this)

{
  undefined4 local_10;
  
  local_10 = (undefined4)*(undefined8 *)(this + 0xb0);
  return local_10;
}


/* RiverCrossingDodoRider::SetWalkingRate(float) */

void __thiscall RiverCrossingDodoRider::SetWalkingRate(RiverCrossingDodoRider *this,float param_1)

{
  *(float *)(this + 0xc0) = param_1;
  return;
}


/* RiverCrossingDodoRider::GetWalkingRate() */

undefined4 __thiscall RiverCrossingDodoRider::GetWalkingRate(RiverCrossingDodoRider *this)

{
  return *(undefined4 *)(this + 0xc0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::GetDrawOffet() */

void RiverCrossingDodoRider::GetDrawOffet(void)

{
  int iVar1;
  int iVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a1e460(0x76);
  iVar2 = FUN_04a1e460(0x73);
  Sexy::FastCurve::SetOutRange(local_10,(float)-iVar1,(float)-iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* RiverCrossingDodoRider::CalcRenderOrder() const */

void __thiscall RiverCrossingDodoRider::CalcRenderOrder(RiverCrossingDodoRider *this)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Board::MakeRenderOrder(0x64d48,0,(int)*(float *)(lVar1 + 4));
  return;
}


/* non-virtual thunk to RiverCrossingDodoRider::CalcRenderOrder() const */

void __thiscall RiverCrossingDodoRider::CalcRenderOrder(RiverCrossingDodoRider *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* RiverCrossingDodoRider::isInState(RiverCrossingDodoRiderState) const */

bool __thiscall RiverCrossingDodoRider::isInState(RiverCrossingDodoRider *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04a1e224(*(undefined4 *)(this + 0xd0));
  return iVar1 == param_2;
}


/* RiverCrossingDodoRider::getRiverCrossingDodoRiderStateSerialization() */

void __thiscall
RiverCrossingDodoRider::getRiverCrossingDodoRiderStateSerialization(RiverCrossingDodoRider *this)

{
  FUN_04a1e224(*(undefined4 *)(this + 0xd0));
  return;
}


/* RiverCrossingDodoRider::canMove() */

byte __thiscall RiverCrossingDodoRider::canMove(RiverCrossingDodoRider *this)

{
  return (byte)this[0xc9] ^ 1;
}


/* RiverCrossingDodoRider::SetIsMoving(bool) */

void __thiscall RiverCrossingDodoRider::SetIsMoving(RiverCrossingDodoRider *this,bool param_1)

{
  this[0xc9] = (RiverCrossingDodoRider)param_1;
  return;
}


/* RiverCrossingDodoRider::GetFlyingRate() */

undefined4 __thiscall RiverCrossingDodoRider::GetFlyingRate(RiverCrossingDodoRider *this)

{
  return *(undefined4 *)(this + 0xc4);
}


/* RiverCrossingDodoRider::SetIsFlying(bool) */

void __thiscall RiverCrossingDodoRider::SetIsFlying(RiverCrossingDodoRider *this,bool param_1)

{
  this[200] = (RiverCrossingDodoRider)param_1;
  return;
}


/* RiverCrossingDodoRider::IsFlying() */

RiverCrossingDodoRider __thiscall RiverCrossingDodoRider::IsFlying(RiverCrossingDodoRider *this)

{
  return this[200];
}


/* RiverCrossingDodoRider::GetDodoRiderRect() */

void RiverCrossingDodoRider::GetDodoRiderRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  if (((DAT_06b78c90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b78c90), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b78bbc = iVar2 / 2 + -5;
    __cxa_guard_release(&DAT_06b78c90);
  }
  if (((DAT_06b78c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b78c98), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06b78bc0 = iVar2 / 2 + -6;
    __cxa_guard_release(&DAT_06b78c98);
  }
  if (((DAT_06b78cd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b78cd0), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b78cb8 = iVar2 + -10;
    __cxa_guard_release(&DAT_06b78cd0);
  }
  iVar2 = DAT_06b78bb8;
  if (((DAT_06b78cc0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b78cc0), iVar2 = DAT_06b78bb8, iVar1 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06b78bb8 = iVar2 + -0xc;
    __cxa_guard_release(&DAT_06b78cc0);
    iVar2 = iVar2 + -0xc;
  }
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_04a1e2bc(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar3 - (float)DAT_06b78bbc),(int)(fVar4 - (float)DAT_06b78bc0),
             DAT_06b78cb8,iVar2);
  return;
}


/* RiverCrossingDodoRider::~RiverCrossingDodoRider() */

void __thiscall RiverCrossingDodoRider::~RiverCrossingDodoRider(RiverCrossingDodoRider *this)

{
  *(undefined ***)this = &PTR_GetClass_0692f370;
  *(undefined ***)(this + 0x10) = &PTR__RiverCrossingDodoRider_0692f5f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xd0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to RiverCrossingDodoRider::~RiverCrossingDodoRider() */

void __thiscall RiverCrossingDodoRider::~RiverCrossingDodoRider(RiverCrossingDodoRider *this)

{
  ~RiverCrossingDodoRider(this + -0x10);
  return;
}


/* RiverCrossingDodoRider::~RiverCrossingDodoRider() */

void __thiscall RiverCrossingDodoRider::~RiverCrossingDodoRider(RiverCrossingDodoRider *this)

{
  ~RiverCrossingDodoRider(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiverCrossingDodoRider::~RiverCrossingDodoRider() */

void __thiscall RiverCrossingDodoRider::~RiverCrossingDodoRider(RiverCrossingDodoRider *this)

{
  ~RiverCrossingDodoRider(this + -0x10);
  return;
}


/* RiverCrossingDodoRider::onDestroy() */

void __thiscall RiverCrossingDodoRider::onDestroy(RiverCrossingDodoRider *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::onDraw(Sexy::Graphics*) */

void __thiscall RiverCrossingDodoRider::onDraw(RiverCrossingDodoRider *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar3 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_04a1e2bc(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_04a1e4f0(fVar2 + 20.0);
  fVar5 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar4 +
       (float)(int)((fVar2 - fVar4) * *(float *)(param_1 + 0x18));
  fVar2 = (float)FUN_04a1e4f0(uVar3 & 0xffffffff);
  fVar2 = *(float *)(param_1 + 0x14) + fVar5 +
          (float)(int)((fVar2 - fVar5) * *(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x14) = fVar2;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  fVar4 = (float)(**(code **)(*(long *)this + 0x1f0))(this);
  (**(code **)(*(long *)this + 0x1f0))(this);
  Sexy::Graphics::Translate(param_1,(int)fVar4,(int)fVar2);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::ClearMultiplicativeOverlayColor(pPVar1);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::CalcDodoFlyingTime() */

void __thiscall RiverCrossingDodoRider::CalcDodoFlyingTime(RiverCrossingDodoRider *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178))
  ;
  std::string::string(asStack_18,"fly_start");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar1,asStack_18);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178))
  ;
  std::string::string(asStack_10,"fly_end");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar1,asStack_10);
  fVar4 = (float)GetFlyingRate(this);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 + fVar2 + fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::WalkToNext() */

void __thiscall RiverCrossingDodoRider::WalkToNext(RiverCrossingDodoRider *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178))
  ;
  std::string::string(asStack_40,"walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::initializePAM(Sexy::PopAnim*) */

void __thiscall RiverCrossingDodoRider::initializePAM(RiverCrossingDodoRider *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"butter");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"_ground");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"ground_swatch");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"ground_swatch_plane");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::updateState_FLYING() */

void __thiscall RiverCrossingDodoRider::updateState_FLYING(RiverCrossingDodoRider *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((1 < *(uint *)(this + 0x170)) && (*(uint *)(this + 0x170) != 3)) {
    fVar1 = *(float *)(this + 0xc4);
    fVar3 = *(float *)(this + 0xbc);
    fVar2 = (float)PVZ_T();
    if ((fVar2 < fVar1 + fVar3) || (this[0xcb] != (RiverCrossingDodoRider)0x0)) {
      if (*(int *)(this + 0x170) == 2) {
        this[0xcb] = (RiverCrossingDodoRider)0x0;
        fVar1 = (float)PVZ_T();
        fVar1 = (fVar1 - *(float *)(this + 0xbc)) / *(float *)(this + 0xc4);
        DVec3::DVec3((DVec3 *)&local_18);
        local_18 = *(float *)(this + 0xa4) +
                   (*(float *)(this + 0xb0) - *(float *)(this + 0xa4)) * fVar1;
        local_14 = *(float *)(this + 0xa8) +
                   (*(float *)(this + 0xb4) - *(float *)(this + 0xa8)) * fVar1;
        local_10 = 0;
        SetIsFlying(this,false);
        (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      }
    }
    else {
      this[0xcb] = (RiverCrossingDodoRider)0x1;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::onEnterState_LEAVING(RiverCrossingDodoRiderState) */

void RiverCrossingDodoRider::onEnterState_LEAVING(RiverCrossingDodoRider *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  WalkToNext(param_1);
  return;
}


/* RiverCrossingDodoRider::Update() */

void __thiscall RiverCrossingDodoRider::Update(RiverCrossingDodoRider *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  StateMachine<RiverCrossingDodoRiderState>::UpdateState
            ((StateMachine<RiverCrossingDodoRiderState> *)(this + 0xd0));
  return;
}


/* RiverCrossingDodoRider::onUpdate() */

void __thiscall RiverCrossingDodoRider::onUpdate(RiverCrossingDodoRider *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  StateMachine<RiverCrossingDodoRiderState>::UpdateState
            ((StateMachine<RiverCrossingDodoRiderState> *)(this + 0xd0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::FlyToNext() */

void __thiscall RiverCrossingDodoRider::FlyToNext(RiverCrossingDodoRider *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178))
  ;
  std::string::string(asStack_58,"fly_start");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::onEnterState_FLYING(RiverCrossingDodoRiderState) */

void RiverCrossingDodoRider::onEnterState_FLYING(RiverCrossingDodoRider *param_1)

{
  SetIsFlying(param_1,true);
  DScrollView::setDirection((DScrollView *)param_1,1);
  FlyToNext(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::onEnterState_DEAD(RiverCrossingDodoRiderState) */

void RiverCrossingDodoRider::onEnterState_DEAD(ReceivedDataCallback *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x178));
  std::string::string(asStack_58,"die");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,(_func_void *)0x1e0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  SetIsMoving((RiverCrossingDodoRider *)param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::JumpIntoWater() */

void RiverCrossingDodoRider::JumpIntoWater(void)

{
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::DodoriderKilled,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::RiverCrossingDodoRider() */

void __thiscall RiverCrossingDodoRider::RiverCrossingDodoRider(RiverCrossingDodoRider *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692f370;
  *(undefined ***)(this + 0x10) = &PTR__RiverCrossingDodoRider_0692f5f0;
  DVec3::DVec3((DVec3 *)(this + 0xa4));
  DVec3::DVec3((DVec3 *)(this + 0xb0));
  StateMachine<RiverCrossingDodoRiderState>::StateMachine
            ((StateMachine<RiverCrossingDodoRiderState> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  this[0xc9] = (RiverCrossingDodoRider)0x0;
  this[200] = (RiverCrossingDodoRider)0x0;
  this[0xca] = (RiverCrossingDodoRider)0x0;
  this[0xcb] = (RiverCrossingDodoRider)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x170) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::StaticNew() */

RiverCrossingDodoRider * RiverCrossingDodoRider::StaticNew(void)

{
  RiverCrossingDodoRider *this;
  
  this = ::operator_new(0x180);
  RiverCrossingDodoRider(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::PlayIdleLooped() */

void __thiscall RiverCrossingDodoRider::PlayIdleLooped(RiverCrossingDodoRider *this)

{
  PopAnimRig *pPVar1;
  string asStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  (**(code **)(*(long *)this + 0x1e8))(this,aPStack_68);
  ProbabilitySet<std::string>::PickItem();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(std::string_const&)>
            (aDStack_38,aCStack_80);
  PopAnimRig::PlayAndStop(pPVar1,asStack_88,0,aDStack_38);
  std::string::~string(asStack_88);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::onAnimStopped(std::string const&) */

void __thiscall RiverCrossingDodoRider::onAnimStopped(RiverCrossingDodoRider *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("fly_end",param_1);
  if ((bVar1) && (*(int *)(this + 0x170) == 3)) {
    DScrollView::setDirection((DScrollView *)this,0);
  }
  cVar2 = isInState(this,0);
  if ((cVar2 == '\0') || (*(int *)(this + 0x170) != 0)) {
    cVar2 = isInState(this,4);
    if (cVar2 == '\0') {
      cVar2 = isInState(this,2);
      if (cVar2 != '\0') {
        if (*(int *)(this + 0x170) == 1) {
          DScrollView::setDirection((DScrollView *)this,2);
          uVar4 = PVZ_T();
          *(undefined4 *)(this + 0xbc) = uVar4;
          pPVar3 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
          std::string::string(asStack_40,"fly_loop");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
          std::string::~string(asStack_40);
          nop();
        }
        else if (*(int *)(this + 0x170) == 3) {
          DScrollView::setDirection((DScrollView *)this,0);
        }
      }
    }
    else {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  else {
    PlayIdleLooped(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingDodoRider::onEnterState_IDLE(RiverCrossingDodoRiderState) */

void RiverCrossingDodoRider::onEnterState_IDLE(RiverCrossingDodoRider *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x178));
  if (((bVar1) && (cVar2 = isInState(param_1,0), cVar2 != '\0')) && (*(int *)(param_1 + 0x170) == 0)
     ) {
    PlayIdleLooped(param_1);
    SetIsMoving(param_1,false);
    return;
  }
  SetIsMoving(param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::StaticClassInit() */

void RiverCrossingDodoRider::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<RiverCrossingDodoRiderState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<RiverCrossingDodoRiderState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"RiverCrossingDodoRider");
      (*pcVar4)(plVar1,asStack_150,FUN_04a20394,0x180,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<RiverCrossingDodoRiderState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverCrossingDodoRiderState_IDLE");
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1fd38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverCrossingDodoRiderState_WALKING");
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1fd38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverCrossingDodoRiderState_FLYING");
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1fd38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverCrossingDodoRiderState_LEAVING");
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1fd38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate0::Delegate0<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x268);
  Sexy::Delegate1<RiverCrossingDodoRiderState>::
  Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(RiverCrossingDodoRiderState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverCrossingDodoRiderState_DEAD");
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a1fd38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiverCrossingDodoRider::StaticGetClass() */

long * RiverCrossingDodoRider::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiverCrossingDodoRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingDodoRider::GetClass() const */

long * RiverCrossingDodoRider::GetClass(void)

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
  (*pcVar3)(plVar1,"RiverCrossingDodoRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::setState(RiverCrossingDodoRiderState) */

void __thiscall RiverCrossingDodoRider::setState(RiverCrossingDodoRider *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RiverCrossingDodoRiderState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RiverCrossingDodoRiderState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RiverCrossingDodoRiderState>::GetStateDefinition
                     ((StateMachineTable<RiverCrossingDodoRiderState> *)pSVar2,param_2);
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RiverCrossingDodoRiderState>::SetContext(aSStack_a8,this);
  StateMachine<RiverCrossingDodoRiderState>::SetState
            ((StateMachine<RiverCrossingDodoRiderState> *)(this + 0xd0),
             (StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::RiverCrossingDodoRiderInitialize(Sexy::PopAnim*) */

void __thiscall
RiverCrossingDodoRider::RiverCrossingDodoRiderInitialize
          (RiverCrossingDodoRider *this,PopAnim *param_1)

{
  int iVar1;
  undefined4 local_28;
  float local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1d8))();
  DVec3::DVec3((DVec3 *)&local_28);
  SetIsMoving(this,true);
  local_28 = 0x444d2000;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_24 = (float)iVar1;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_28);
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 810.5 - (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar1;
  SetNextPosition(local_18,local_14,local_10,this);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::RiverCrossingExternDodoRiderInitialize(Sexy::PopAnim*) */

void RiverCrossingDodoRider::RiverCrossingExternDodoRiderInitialize(PopAnim *param_1)

{
  int iVar1;
  undefined4 local_28;
  float local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1d8))();
  DVec3::DVec3((DVec3 *)&local_28);
  SetIsMoving((RiverCrossingDodoRider *)param_1,true);
  local_28 = 0x44612000;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_24 = (float)iVar1;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,(DVec3 *)&local_28);
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 810.5 - (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar1;
  SetNextPosition(local_18,local_14,local_10,param_1);
  setState((RiverCrossingDodoRider *)param_1,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::OnDodoRiderLanded() */

void __thiscall RiverCrossingDodoRider::OnDodoRiderLanded(RiverCrossingDodoRider *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x78))(this,this + 0xb0);
  if (this[0xca] == (RiverCrossingDodoRider)0x0) {
    DScrollView::setDirection((DScrollView *)this,3);
    setState(this,0);
    MessageRouter::Post((_func_void *)gMessageRouter);
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    std::string::string(asStack_58,"fly_end");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<RiverCrossingDodoRider,void(RiverCrossingDodoRider::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    DScrollView::setDirection((DScrollView *)this,0);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::updateState_WALKING() */

void __thiscall RiverCrossingDodoRider::updateState_WALKING(RiverCrossingDodoRider *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar1 = *(float *)(this + 0xc0);
  fVar3 = *(float *)(this + 0xbc);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (fVar1 + fVar3 <= fVar2) {
    (**(code **)(*(long *)this + 0x78))(this,this + 0xb0);
    DScrollView::setDirection((DScrollView *)this,0);
    setState(this,0);
  }
  else {
    fVar1 = (float)PVZ_T();
    fVar1 = (fVar1 - *(float *)(this + 0xbc)) / *(float *)(this + 0xc0);
    DVec3::DVec3((DVec3 *)&local_18);
    local_18 = *(float *)(this + 0xa4) + (*(float *)(this + 0xb0) - *(float *)(this + 0xa4)) * fVar1
    ;
    local_14 = *(float *)(this + 0xa8) + (*(float *)(this + 0xb4) - *(float *)(this + 0xa8)) * fVar1
    ;
    local_10 = 0;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::updateState_LEAVING() */

void __thiscall RiverCrossingDodoRider::updateState_LEAVING(RiverCrossingDodoRider *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar1 = *(float *)(this + 0xc0);
  fVar3 = *(float *)(this + 0xbc);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (fVar1 * 5.0 + fVar3 <= fVar2) {
    (**(code **)(*(long *)this + 0x78))(this,this + 0xb0);
    setState(this,0);
  }
  else {
    fVar2 = (float)PVZ_T();
    fVar1 = (fVar2 - *(float *)(this + 0xbc)) / (fVar1 * 5.0);
    DVec3::DVec3((DVec3 *)&local_18);
    local_18 = *(float *)(this + 0xa4) + (*(float *)(this + 0xb0) - *(float *)(this + 0xa4)) * fVar1
    ;
    local_14 = *(float *)(this + 0xa8) + (*(float *)(this + 0xb4) - *(float *)(this + 0xa8)) * fVar1
    ;
    local_10 = 0;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::setRiverCrossingDodoRiderStateSerialization(int) */

void __thiscall
RiverCrossingDodoRider::setRiverCrossingDodoRiderStateSerialization
          (RiverCrossingDodoRider *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RiverCrossingDodoRiderState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RiverCrossingDodoRiderState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RiverCrossingDodoRiderState>::GetStateDefinition
                     ((StateMachineTable<RiverCrossingDodoRiderState> *)pSVar2,param_1);
  StateDefinition<RiverCrossingDodoRiderState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RiverCrossingDodoRiderState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xd0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingDodoRider::GetIdleWeights(ProbabilitySet<std::string >&) */

void __thiscall
RiverCrossingDodoRider::GetIdleWeights(RiverCrossingDodoRider *this,ProbabilitySet *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)param_1);
  if (lVar1 == 0) {
    std::string::string(asStack_10,"idle");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)param_1,asStack_10,0x33);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"idle2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)param_1,asStack_10,0x29);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"idle3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)param_1,asStack_10,8);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

