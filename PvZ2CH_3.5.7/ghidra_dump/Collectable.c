// Class: Collectable


/* Collectable::onCollectableInitialize() */

void Collectable::onCollectableInitialize(void)

{
  return;
}


/* Collectable::getState() const */

void __thiscall Collectable::getState(Collectable *this)

{
  FUN_03c5dbd8(*(undefined4 *)(this + 200));
  return;
}


/* Collectable::CanChangeColorState() */

bool __thiscall Collectable::CanChangeColorState(Collectable *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  return iVar1 == 0;
}


/* Collectable::IsCollecting() const */

bool __thiscall Collectable::IsCollecting(Collectable *this)

{
  int iVar1;
  
  iVar1 = FUN_03c5dbd8(*(undefined4 *)(this + 200));
  return iVar1 == 1;
}


/* Collectable::SetFadeOutOnCollectDuration(float) */

void __thiscall Collectable::SetFadeOutOnCollectDuration(Collectable *this,float param_1)

{
  *(float *)(this + 0x170) = param_1;
  return;
}


/* Collectable::GetMotionNewtonianValues(Sexy::SexyVector3&, Sexy::SexyVector3&, bool&) const */

void __thiscall
Collectable::GetMotionNewtonianValues
          (Collectable *this,SexyVector3 *param_1,SexyVector3 *param_2,bool *param_3)

{
  Sexy::SexyVector3::operator=(param_1,(SexyVector3 *)(this + 400));
  Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)(this + 0x19c));
  *param_3 = (bool)this[0x1a8];
  return;
}


/* Collectable::SetMotionDrunk() */

void __thiscall Collectable::SetMotionDrunk(Collectable *this)

{
  *(undefined4 *)(this + 0x188) = 2;
  *(undefined4 *)(this + 0x1dc) = 0x42480000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::clearExpirationEffects() */

void __thiscall Collectable::clearExpirationEffects(Collectable *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xb0));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    pcVar3 = *(code **)(*plVar2 + 0x78);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0xff);
    (*pcVar3)(plVar2,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::onExitState_Idle(CollectableState) */

void Collectable::onExitState_Idle(long param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0xb0));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    pcVar3 = *(code **)(*plVar2 + 0x78);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0xff);
    (*pcVar3)(plVar2,aIStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::ForceUpdateEffect() */

void __thiscall Collectable::ForceUpdateEffect(Collectable *this)

{
  char cVar1;
  StandaloneEffect *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xb0));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  StandaloneEffect::FollowAttachment(this_00);
  return;
}


/* Collectable::~Collectable() */

void __thiscall Collectable::~Collectable(Collectable *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_06754290;
  *(undefined ***)(this + 0x10) = &PTR__Collectable_067544e0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Collectable::~Collectable() */

void __thiscall Collectable::~Collectable(Collectable *this)

{
  ~Collectable(this + -0x10);
  return;
}


/* Collectable::~Collectable() */

void __thiscall Collectable::~Collectable(Collectable *this)

{
  ~Collectable(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Collectable::~Collectable() */

void __thiscall Collectable::~Collectable(Collectable *this)

{
  ~Collectable(this + -0x10);
  return;
}


/* Collectable::calcCollisionRect() */

void Collectable::calcCollisionRect(void)

{
  long in_x0;
  long lVar1;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(in_x0 + 0x1c);
  fVar2 = (float)FUN_03c5dbec(*(undefined4 *)(in_x0 + 0x18),fVar3,*(undefined4 *)(in_x0 + 0x20));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar2 - *(float *)(lVar1 + 0x18) * 0.5),
             (int)(fVar3 - *(float *)(lVar1 + 0x1c) * 0.5),(int)*(float *)(lVar1 + 0x18),
             (int)*(float *)(lVar1 + 0x1c));
  return;
}


/* Collectable::playSpawnedSound() */

void __thiscall Collectable::playSpawnedSound(Collectable *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  lVar1 = FUN_05474184(lVar1 + 0x30);
  if (lVar1 == 0) {
    return;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar1 + 0x30),0.0);
  return;
}


/* Collectable::playCollectSound() */

void __thiscall Collectable::playCollectSound(Collectable *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  lVar1 = FUN_05474184(lVar1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar1 + 0x40),0.0);
  return;
}


/* Collectable::playHitGroundSound() */

void __thiscall Collectable::playHitGroundSound(Collectable *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  lVar1 = FUN_05474184(lVar1 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar1 + 0x38),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::SnapToBoard() */

void __thiscall Collectable::SnapToBoard(Collectable *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *(float *)(lVar1 + 0x18) * 0.5;
  local_18 = *pfVar2;
  fVar5 = pfVar2[1];
  local_10 = pfVar2[2];
  fVar4 = fVar3 + 200.0;
  local_14 = *(float *)(lVar1 + 0x1c) * 0.5;
  if (fVar4 <= local_18) {
    fVar3 = 800.0 - fVar3;
    if ((fVar3 < local_18) && (local_18 = fVar3, 0.0 < *(float *)(this + 400))) {
      *(float *)(this + 400) = -*(float *)(this + 400);
    }
  }
  else {
    local_18 = fVar4;
    if (*(float *)(this + 400) < 0.0) {
      *(float *)(this + 400) = -*(float *)(this + 400);
    }
  }
  if (local_14 <= fVar5) {
    local_14 = 600.0 - local_14;
    if ((fVar5 <= local_14) || (fVar3 = *(float *)(this + 0x194), fVar5 = local_14, fVar3 <= 0.0))
    goto LAB_03c5e2fc;
  }
  else {
    fVar3 = *(float *)(this + 0x194);
    fVar5 = local_14;
    if (0.0 <= fVar3) goto LAB_03c5e2fc;
  }
  *(float *)(this + 0x194) = -fVar3;
  fVar5 = local_14;
LAB_03c5e2fc:
  local_14 = fVar5;
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::onUpdate() */

void __thiscall Collectable::onUpdate(Collectable *this)

{
  StateMachine<CollectableState>::UpdateState((StateMachine<CollectableState> *)(this + 200));
  (**(code **)(*(long *)this + 0x210))(this);
  (**(code **)(*(long *)this + 0x218))(this);
  return;
}


/* Collectable::IsTouchable() const */

bool __thiscall Collectable::IsTouchable(Collectable *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),0x80);
  return !bVar1;
}


/* Collectable::IsCollectable() const */

bool __thiscall Collectable::IsCollectable(Collectable *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),0x40);
  return !bVar1;
}


/* Collectable::IsBanked() const */

bool __thiscall Collectable::IsBanked(Collectable *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),0x10);
  return bVar1;
}


/* Collectable::IsEndOfLevelReward() const */

bool __thiscall Collectable::IsEndOfLevelReward(Collectable *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),0x100);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::IsTouched(Sexy::Touch const&) */

void __thiscall Collectable::IsTouched(Collectable *this,Touch *param_1)

{
  Insets *pIVar1;
  float fVar2;
  float fVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_03c5dd90((float)*(int *)(param_1 + 0x10));
  fVar3 = (float)FUN_03c5dd90((float)*(int *)(param_1 + 0x14));
  pIVar1 = (Insets *)(**(code **)(*(long *)this + 0x178))();
  Sexy::Insets::Insets(aIStack_18,pIVar1);
  Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(int)fVar2,(int)fVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::CancelFinishCollectAfterMotion() */

void __thiscall Collectable::CancelFinishCollectAfterMotion(Collectable *this)

{
  SetFlag<DebugLogFlags>(this + 0xbc,2,0);
  return;
}


/* Collectable::SetNeverExpire(bool) */

void __thiscall Collectable::SetNeverExpire(Collectable *this,bool param_1)

{
  undefined4 uVar1;
  
  SetFlag<DebugLogFlags>(this + 0xbc,8,param_1);
  if (param_1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x16c) = uVar1;
  }
  return;
}


/* Collectable::SetKeepOnBoard(bool) */

void __thiscall Collectable::SetKeepOnBoard(Collectable *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xbc,0x20,param_1);
  return;
}


/* Collectable::SetDisableCollection(bool) */

void __thiscall Collectable::SetDisableCollection(Collectable *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xbc,0x40,param_1);
  return;
}


/* Collectable::SetDisableTouch(bool) */

void __thiscall Collectable::SetDisableTouch(Collectable *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xbc,0x80,param_1);
  return;
}


/* Collectable::SetIsEndOfLevelReward(bool) */

void __thiscall Collectable::SetIsEndOfLevelReward(Collectable *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xbc,0x100,param_1);
  return;
}


/* Collectable::SetFlashing(bool) */

void __thiscall Collectable::SetFlashing(Collectable *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0xbc,0x200,param_1);
  return;
}


/* Collectable::StartExpirationTimerAfterMotion() */

void __thiscall Collectable::StartExpirationTimerAfterMotion(Collectable *this)

{
  SetFlag<DebugLogFlags>(this + 0xbc,4,1);
  return;
}


/* Collectable::StartCollectAfterMotion() */

void __thiscall Collectable::StartCollectAfterMotion(Collectable *this)

{
  SetFlag<DebugLogFlags>(this + 0xbc,1,1);
  return;
}


/* Collectable::SetHidden(bool) */

void __thiscall Collectable::SetHidden(Collectable *this,bool param_1)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  RealObject::SetHidden((RealObject *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (!bVar1) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  StandaloneEffect::SetVisibility(this_00,!param_1);
  return;
}


/* Collectable::getTimeInState() const */

float __thiscall Collectable::getTimeInState(Collectable *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return fVar1 - *(float *)(this + 0x168);
}


/* Collectable::SetPauseExpirationTimer(bool) */

void __thiscall Collectable::SetPauseExpirationTimer(Collectable *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  SetFlag<DebugLogFlags>(this + 0xbc,8,param_1);
  if (!param_1) {
    fVar2 = (float)PVZ_T();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
    fVar4 = *(float *)(this + 0x16c);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar3 = *(float *)(lVar1 + 0x20);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (fVar3 - (fVar2 - fVar4) < *(float *)(lVar1 + 0x28)) {
      fVar2 = (float)PVZ_T();
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar3 = *(float *)(lVar1 + 0x20);
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      *(float *)(this + 0x16c) = (*(float *)(lVar1 + 0x28) - fVar3) + fVar2;
      return;
    }
  }
  return;
}


/* Collectable::SetMotionIdle() */

void __thiscall Collectable::SetMotionIdle(Collectable *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x188) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18c) = uVar1;
  return;
}


/* Collectable::SetMotionNewtonian(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&, bool) */

void __thiscall
Collectable::SetMotionNewtonian
          (Collectable *this,SexyVector3 *param_1,SexyVector3 *param_2,bool param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x188) = 1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18c) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 400),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x19c),param_2);
  this[0x1a8] = (Collectable)param_3;
  return;
}


/* Collectable::SetMotionInterpolate(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&, float,
   CurveType) */

void __thiscall
Collectable::SetMotionInterpolate
          (undefined4 param_3,Collectable *this,SexyVector3 *param_1,SexyVector3 *param_2,
          undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x188) = 3;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18c) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1ac),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b8),param_2);
  *(undefined4 *)(this + 0x1d0) = param_5;
  *(undefined4 *)(this + 0x1cc) = param_3;
  return;
}


/* Collectable::SetMotionInterpolateAndScale(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&,
   float, float, float, CurveType) */

void __thiscall
Collectable::SetMotionInterpolateAndScale
          (undefined4 param_3,undefined4 param_4,undefined4 param_5,Collectable *this,
          SexyVector3 *param_1,SexyVector3 *param_2,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x188) = 4;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18c) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1ac),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b8),param_2);
  *(undefined4 *)(this + 0x1d0) = param_7;
  *(undefined4 *)(this + 0x1c4) = param_3;
  *(undefined4 *)(this + 0x1c8) = param_4;
  *(undefined4 *)(this + 0x1cc) = param_5;
  return;
}


/* Collectable::SetMotionScaleOut(float, CurveType) */

void __thiscall
Collectable::SetMotionScaleOut(undefined4 param_1,Collectable *this,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x188) = 5;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1d0) = param_3;
  *(undefined4 *)(this + 0x1cc) = param_1;
  *(undefined4 *)(this + 0x18c) = uVar1;
  return;
}


/* Collectable::StartInstantUseTimer() */

void __thiscall Collectable::StartInstantUseTimer(Collectable *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1ec) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::updateDrunkMotion() */

void __thiscall Collectable::updateDrunkMotion(Collectable *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SexyVector3 *pSVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FastCurve aFStack_38 [8];
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined4 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e4] != (Collectable)0x0) {
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_28 = *puVar8;
    local_20 = *(undefined4 *)(puVar8 + 1);
    Board::GetGridBoundingRect();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar11 = (float)local_28;
    fVar13 = local_28._4_4_;
    iVar6 = local_14 + iVar5 / 2;
    iVar1 = local_18 + iVar4 / 2;
    iVar4 = local_10 - iVar4;
    iVar5 = local_c - iVar5;
    local_18 = iVar1;
    local_14 = iVar6;
    local_10 = iVar4;
    local_c = iVar5;
    cVar3 = Sexy::TRect<int>::Contains
                      ((TRect<int> *)&local_18,(int)(float)local_28,(int)local_28._4_4_);
    if (cVar3 == '\0') {
      fVar13 = (float)(int)((float)(iVar6 + iVar5 / 2) - fVar13);
      Sexy::FastCurve::SetOutRange
                (aFStack_38,(float)(int)((float)(iVar1 + iVar4 / 2) - fVar11),fVar13);
      local_30 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_38);
      local_2c = fVar13;
      fVar11 = (float)PVZ_Dt();
      Sexy::SexyVector2::operator*=((SexyVector2 *)&local_30,fVar11 * 250.0);
      local_28 = CONCAT44(local_2c + local_28._4_4_,local_30 + (float)local_28);
      (**(code **)(*(long *)this + 0x78))(this,&local_28);
      if (this[0x1e4] != (Collectable)0x0) goto LAB_03c5ea30;
    }
    else {
      this[0x1e4] = (Collectable)0x0;
    }
  }
  pSVar7 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  DVec3::DVec3((DVec3 *)&local_28);
  Board::GetGridBoundingRect();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar11 = *(float *)pSVar7;
  fVar13 = *(float *)(pSVar7 + 4);
  iVar6 = local_18 + iVar4 / 2;
  iVar4 = local_10 - iVar4;
  iVar1 = local_14 + iVar5 / 2;
  iVar5 = local_c - iVar5;
  local_18 = iVar6;
  local_14 = iVar1;
  local_10 = iVar4;
  local_c = iVar5;
  cVar3 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,(int)fVar11,(int)fVar13);
  if (cVar3 == '\0') {
    this[0x1e4] = (Collectable)0x1;
    dVar10 = atan2((double)(fVar13 - (float)(iVar1 + iVar5 / 2)),
                   (double)(fVar11 - (float)(iVar6 + iVar4 / 2)));
    uVar9 = Sexy::SexyMath::RadToDeg((float)dVar10);
    *(undefined4 *)(this + 0x1d4) = uVar9;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar7);
  }
  else {
    fVar14 = *(float *)(this + 0x1dc);
    fVar11 = (float)PVZ_Dt();
    fVar13 = *(float *)(this + 0x1dc);
    *(float *)(this + 0x1d8) = *(float *)(this + 0x1d8) + fVar14 * fVar11;
    fVar11 = (float)PVZ_Dt();
    fVar11 = *(float *)(this + 0x1d4) + fVar13 * fVar11;
    uVar2 = (int)*(float *)(this + 0x1d8) >> 0x1f;
    *(float *)(this + 0x1d4) = fVar11;
    if (90.0 < (float)(int)(((int)*(float *)(this + 0x1d8) ^ uVar2) - uVar2)) {
      iVar6 = Sexy::Rand(100);
      fVar13 = 1.0;
      if (iVar6 < 0x32) {
        fVar13 = -1.0;
      }
      fVar11 = *(float *)(this + 0x1d4);
      *(float *)(this + 0x1dc) = *(float *)(this + 0x1dc) * fVar13;
    }
    fVar14 = *(float *)pSVar7;
    fVar11 = (float)Sexy::SexyMath::DegToRad(fVar11);
    dVar10 = cos((double)fVar11);
    fVar13 = *(float *)(this + 0x1e0);
    fVar11 = (float)PVZ_Dt();
    fVar12 = *(float *)(pSVar7 + 4);
    local_28 = CONCAT44(local_28._4_4_,
                        (float)((double)fVar14 + (double)fVar11 * dVar10 * (double)fVar13));
    fVar11 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x1d4));
    dVar10 = sin((double)fVar11);
    fVar14 = *(float *)(this + 0x1e0);
    fVar13 = (float)PVZ_Dt();
    local_20 = *(undefined4 *)(pSVar7 + 8);
    fVar11 = (float)local_28;
    dVar10 = (double)fVar12 + (double)fVar13 * dVar10 * (double)fVar14;
    fVar13 = (float)dVar10;
    local_28 = CONCAT44(fVar13,(float)local_28);
    cVar3 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,(int)(float)local_28,(int)dVar10);
    if (cVar3 == '\0') {
      fVar14 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x1d4));
      fVar12 = cosf(fVar14);
      fVar14 = sinf(fVar14);
      if ((fVar11 <= (float)local_18 + 2.0) || ((float)(local_18 + local_10) - 2.0 <= fVar11)) {
        fVar12 = -fVar12;
      }
      if ((fVar13 <= (float)local_14 + 2.0) || ((float)(local_14 + local_c) - 2.0 <= fVar13)) {
        fVar14 = -fVar14;
      }
      dVar10 = atan2((double)fVar14,(double)fVar12);
      fVar11 = (float)Sexy::SexyMath::RadToDeg((float)dVar10);
      fVar12 = *(float *)pSVar7;
      *(float *)(this + 0x1d4) = fVar11;
      *(undefined4 *)(this + 0x1d8) = 0x42a00000;
      fVar11 = (float)Sexy::SexyMath::DegToRad(fVar11);
      dVar10 = cos((double)fVar11);
      fVar13 = *(float *)(this + 0x1e0);
      fVar11 = (float)PVZ_Dt();
      fVar14 = *(float *)(pSVar7 + 4);
      local_28 = CONCAT44(local_28._4_4_,
                          (float)((double)fVar12 + (double)fVar11 * dVar10 * (double)fVar13));
      fVar11 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x1d4));
      dVar10 = sin((double)fVar11);
      fVar13 = *(float *)(this + 0x1e0);
      fVar11 = (float)PVZ_Dt();
      local_28 = CONCAT44((float)((double)fVar14 + (double)fVar11 * dVar10 * (double)fVar13),
                          (float)local_28);
    }
  }
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_28);
LAB_03c5ea30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::getDesiredEffectColor() */

void Collectable::getDesiredEffectColor(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  Collectable *in_x0;
  long lVar4;
  float *pfVar5;
  undefined8 *in_x8;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color();
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(in_x0 + 0xbc),0x200);
  if (bVar1) {
    fVar6 = (float)PVZ_T();
    dVar8 = fmod((double)(fVar6 - *(float *)(in_x0 + 0xc0)),0.800000011920929);
    local_1c = 0;
    local_18 = 1.0;
    CurveLerp<float>(0,0x3f4ccccd,(float)dVar8,&local_1c,(Insets *)&local_18,8);
    local_18 = 0.0;
    fVar6 = CurveEvaluate<float>((Insets *)&local_18,&DAT_06a8856c,1);
    iVar3 = (int)((1.0 - fVar6) * 255.0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar3,iVar3,0xff);
    *in_x8 = CONCAT44(uStack_14,local_18);
    in_x8[1] = uStack_10;
  }
  cVar2 = (**(code **)(*(long *)in_x0 + 0x238))();
  if (((cVar2 == '\0') || (bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(in_x0 + 0xbc),8), bVar1)) ||
     (fVar6 = (float)PVZ_EOT(), fVar6 <= *(float *)(in_x0 + 0x16c))) {
    iVar3 = getState(in_x0);
  }
  else {
    fVar6 = (float)PVZ_T();
    this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8);
    fVar10 = *(float *)(in_x0 + 0x16c);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    fVar6 = *(float *)(lVar4 + 0x20) - (fVar6 - fVar10);
    local_24 = 1.0;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    if (0.0 < *(float *)(lVar4 + 0x28)) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      local_1c = 0x3f800000;
      local_18 = 0.0;
      fVar10 = CurveLerp<float>(0,*(undefined4 *)(lVar4 + 0x28),fVar6,&local_1c,&local_18,1);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      dVar8 = fmod((double)(fVar10 * *(float *)(lVar4 + 0x28)),0.5);
      local_20 = 0x3f800000;
      local_1c = 0;
      local_18 = CurveLerp<float>(0,0x3f000000,(float)dVar8,&local_20,&local_1c,0xc);
      pfVar5 = eastl::min_alt<float>(&local_24,&local_18);
      local_24 = *pfVar5;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    fVar10 = local_24;
    if (0.0 < *(float *)(lVar4 + 0x24)) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      local_1c = 0x3f800000;
      local_18 = 0.0;
      local_18 = CurveLerp<float>(0,*(undefined4 *)(lVar4 + 0x24),fVar6,&local_1c,&local_18,4);
      local_18 = 1.0 - local_18;
      pfVar5 = eastl::min_alt<float>(&local_24,&local_18);
      fVar10 = *pfVar5;
    }
    *(int *)((long)in_x8 + 0xc) = (int)(fVar10 * (float)*(int *)((long)in_x8 + 0xc));
    iVar3 = getState(in_x0);
  }
  if (iVar3 == 1) {
    fVar10 = *(float *)(in_x0 + 0x170);
    fVar6 = (float)PVZ_EOT();
    if ((fVar10 < fVar6) && (*(int *)(in_x0 + 0x188) - 3U < 2)) {
      fVar6 = *(float *)(in_x0 + 0x1cc);
      fVar9 = *(float *)(in_x0 + 0x18c);
      uVar7 = PVZ_T();
      local_18 = 1.0;
      local_1c = 0;
      fVar6 = CurveLerp<float>((fVar6 + fVar9) - fVar10,fVar6 + fVar9,uVar7,&local_1c,&local_18,4);
      *(int *)((long)in_x8 + 0xc) = (int)((1.0 - fVar6) * (float)*(int *)((long)in_x8 + 0xc));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::updateEffect() */

void __thiscall Collectable::updateEffect(Collectable *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_28 [12];
  int local_1c;
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0xb0));
  if (cVar1 == '\0') {
    getDesiredEffectColor();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar3 + 0x78))(plVar3,auStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      pcVar4 = *(code **)(*plVar3 + 0x78);
      Sexy::Color::Color(aCStack_18,1);
      (*pcVar4)(plVar3,aCStack_18);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x180));
    if (bVar2) {
      Sexy::Color::Color(aCStack_18,1);
      local_c = (int)((float)local_1c * 0.003921569 * (float)local_1c * 0.003921569 * (float)local_c
                     );
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
      (**(code **)(*plVar3 + 0x78))(plVar3,aCStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::CreateRenderEffect(CollectableType const*) */

void Collectable::CreateRenderEffect(CollectableType *param_1)

{
  char cVar1;
  long lVar2;
  Effect_StaticImage *pEVar3;
  Effect_BouncingArrow *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05474184((string *)(param_1 + 0x48));
  if (lVar2 == 0) {
    lVar2 = FUN_05474184(param_1 + 0x60);
    if (lVar2 == 0) {
      pEVar3 = (Effect_StaticImage *)0x0;
      goto LAB_03c5f42c;
    }
    pEVar3 = Board::AddEffect<Effect_StaticImage>(*(Board **)(gLawnApp + 0x9f0));
    nop();
    LawnApp::GetImageFromStringId(gLawnApp,(int)(param_1 + 0x60));
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 == '\0') {
      LawnApp::GetUIImageFromStringId(gLawnApp);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Effect_BouncingArrow::SetArrowImage(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Effect_BouncingArrow::SetTransX(this,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    pEVar3 = (Effect_StaticImage *)Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    nop();
    GetPAMByName((string *)(param_1 + 0x48));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)(param_1 + 0x68),-1);
    Effect_PopAnim::SetCentered(this_00,true);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_00,param_1 + 0x58,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (pEVar3 != (Effect_StaticImage *)0x0) {
    FUN_03c5dbdc(pEVar3 + 0x1c);
    (**(code **)(*(long *)pEVar3 + 0x80))(*(undefined4 *)(param_1 + 0x50),pEVar3);
  }
LAB_03c5f42c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pEVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::initializeRenderEffect() */

void __thiscall Collectable::initializeRenderEffect(Collectable *this)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  StandaloneEffect *this_01;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  this_01 = (StandaloneEffect *)CreateRenderEffect((CollectableType *)pRVar1);
  if (this_01 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetAttached(this_01,(RealObject *)this,(SexyVector3 *)(lVar2 + 0x68),2);
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(lVar2 + 0x50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::Collectable() */

void __thiscall Collectable::Collectable(Collectable *this)

{
  undefined4 uVar1;
  float fVar2;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06754290;
  *(undefined ***)(this + 0x10) = &PTR__Collectable_067544e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  StateMachine<CollectableState>::StateMachine((StateMachine<CollectableState> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  DVec3::DVec3((DVec3 *)(this + 400));
  DVec3::DVec3((DVec3 *)(this + 0x19c));
  DVec3::DVec3((DVec3 *)(this + 0x1ac));
  DVec3::DVec3((DVec3 *)(this + 0x1b8));
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  uVar1 = PVZ_EOT();
  this[0x1a8] = (Collectable)0x0;
  *(undefined4 *)(this + 0x1d0) = 0;
  this[0x1e4] = (Collectable)0x0;
  *(undefined4 *)(this + 0x18c) = uVar1;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x168) = uVar1;
  *(undefined4 *)(this + 0x16c) = uVar1;
  *(undefined4 *)(this + 0x170) = uVar1;
  *(undefined4 *)(this + 0x1e0) = 0x42c80000;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  fVar2 = (float)PVZ_T();
  *(undefined4 *)(this + 0x1ec) = uVar1;
  *(float *)(this + 0x1e8) = fVar2 + 0.5;
  return;
}


/* Collectable::StaticNew() */

Collectable * Collectable::StaticNew(void)

{
  Collectable *this;
  
  this = ::operator_new(0x1f0);
  Collectable(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::registerForEvents() */

void __thiscall Collectable::registerForEvents(Collectable *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<Collectable,bool(Collectable::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::TryToCollect() */

void __thiscall Collectable::TryToCollect(Collectable *this)

{
  char cVar1;
  
  cVar1 = IsCollecting(this);
  if (cVar1 != '\0') {
    return;
  }
  MessageRouter::Post<Collectable*,Collectable*>
            ((MessageRouter *)gMessageRouter,Message::CollectableTryToCollect,this);
  return;
}


/* Collectable::onTouchEvent(Sexy::Touch const&) */

bool __thiscall Collectable::onTouchEvent(Collectable *this,Touch *param_1)

{
  bool bVar1;
  char cVar2;
  TRect<int> *this_00;
  float fVar3;
  float fVar4;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),0x80);
  if ((!bVar1) && (*(uint *)(param_1 + 0x30) < 2)) {
    fVar3 = (float)FUN_03c5dd90((float)*(int *)(param_1 + 0x10));
    fVar4 = (float)FUN_03c5dd90((float)*(int *)(param_1 + 0x14));
    this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
    cVar2 = Sexy::TRect<int>::Contains(this_00,(int)fVar3,(int)fVar4);
    if (cVar2 != '\0') {
      TryToCollect(this);
      return *(int *)(param_1 + 0x30) == 0;
    }
  }
  return false;
}


/* Collectable::TryToInstantUse() */

void __thiscall Collectable::TryToInstantUse(Collectable *this)

{
  char cVar1;
  
  cVar1 = IsCollecting(this);
  if (cVar1 != '\0') {
    return;
  }
  MessageRouter::Post<Collectable*,Collectable*>
            ((MessageRouter *)gMessageRouter,Message::CollectableTryToInstantUse,this);
  return;
}


/* Collectable::updateState_Idle() */

void __thiscall Collectable::updateState_Idle(Collectable *this)

{
  bool bVar1;
  long lVar2;
  CollectableSeedPacketPlantable *pCVar3;
  CollectableSeedPacketZombie *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),8);
  if (!bVar1) {
    fVar4 = (float)PVZ_EOT();
    if (fVar4 <= *(float *)(this + 0x16c)) {
      pCVar3 = Sexy::RtObject::Cast<CollectableSeedPacketPlantable>((RtObject *)this);
      if (pCVar3 != (CollectableSeedPacketPlantable *)0x0) {
        fVar5 = (float)FUN_03c5dbc0(*(undefined4 *)(pCVar3 + 0x20c));
        fVar6 = (float)PVZ_T();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        if (fVar5 - fVar6 < *(float *)(lVar2 + 0x20)) {
          NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this);
        }
      }
      goto LAB_03c5fdc8;
    }
    fVar5 = (float)PVZ_T();
    fVar6 = *(float *)(this + 0x16c);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
    ;
    if (*(float *)(lVar2 + 0x20) - (fVar5 - fVar6) <= 0.0) {
      MessageRouter::Post<Collectable*,Collectable*>
                ((MessageRouter *)gMessageRouter,Message::CollectableExpired,this);
      this_00 = Sexy::RtObject::Cast<CollectableSeedPacketZombie>((RtObject *)this);
      if (this_00 != (CollectableSeedPacketZombie *)0x0) {
        CollectableSeedPacketZombie::spawnZombie(this_00);
      }
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_03c5fdc8;
    }
  }
  fVar4 = (float)PVZ_EOT();
LAB_03c5fdc8:
  if ((*(float *)(this + 0x1ec) < fVar4) &&
     (fVar4 = (float)PVZ_T(), 1.0 <= fVar4 - *(float *)(this + 0x1ec))) {
    TryToInstantUse(this);
    return;
  }
  return;
}


/* Collectable::FinishCollect() */

void __thiscall Collectable::FinishCollect(Collectable *this)

{
  bool bVar1;
  long *plVar2;
  
  SetFlag<DebugLogFlags>(this + 0xbc,0x10,1);
  MessageRouter::Post<Collectable*,Collectable*>
            ((MessageRouter *)gMessageRouter,Message::CollectableCollectionFinished,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x180));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
    (**(code **)(*plVar2 + 0x48))();
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::onFinishMotion() */

void __thiscall Collectable::onFinishMotion(Collectable *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetMotionIdle(this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),4);
  if (bVar1) {
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x16c) = uVar5;
  }
  cVar2 = IsCollecting(this);
  if (cVar2 == '\0') {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),1);
    if (bVar1) {
      TryToCollect(this);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      if (*(char *)(lVar3 + 0x90) != '\0') {
        SetFlashing(this,true);
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        nop();
        std::string::string(asStack_10,"POPANIM_EFFECTS_PRIZE_TWINKLE");
        GetPAMByName(asStack_10);
        std::string::~string(asStack_10);
        nop();
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(this_01,true);
        std::string::string(asStack_10,"animation");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
        if (this_00 != (Effect_PopAnim *)0x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x178),
                     (RtWeakPtrBase *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)asStack_10);
          StandaloneEffect::SetAttached
                    ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector2 *)asStack_10,2);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  else {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),2);
    if (bVar1) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      FinishCollect(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::updateMotion() */

void Collectable::updateMotion(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  char cVar2;
  bool bVar3;
  Collectable *in_x0;
  SexyVector3 *this_00;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float in_s1;
  undefined4 in_s2;
  float fVar10;
  float fVar11;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(in_x0 + 0x188)) {
  case 1:
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
    fVar9 = (float)PVZ_Dt();
    bVar1 = false;
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 400),fVar9);
    local_28[0] = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_18);
    local_20 = in_s2;
    (**(code **)(*(long *)in_x0 + 0x78))();
    if (((in_x0[0x1a8] != (Collectable)0x0) && (*(float *)(in_x0 + 0x198) < 0.0)) &&
       (*(float *)(this_00 + 8) <= 0.0)) {
      bVar1 = true;
      local_20 = 0;
      (**(code **)(*(long *)in_x0 + 0x78))();
      playHitGroundSound(in_x0);
      MessageRouter::Broadcast<Collectable*,Collectable*>
                ((MessageRouter *)gMessageRouter,Message::CollectableHitGround,in_x0);
    }
    fVar9 = (float)PVZ_Dt();
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x19c),fVar9);
    local_14 = in_s1;
    EATextSquish::Vec3::operator+=((Vec3 *)(in_x0 + 400),(Vec3 *)&local_18);
    break;
  case 2:
    updateDrunkMotion(in_x0);
  default:
switchD_03c601dc_default:
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(in_x0 + 0xbc),0x20);
    if (!bVar1) goto LAB_03c60198;
    bVar1 = false;
    goto LAB_03c601e4;
  case 3:
    fVar9 = (float)PVZ_T();
    fVar10 = *(float *)(in_x0 + 0x18c);
    fVar9 = (fVar9 - fVar10) / *(float *)(in_x0 + 0x1cc);
    local_18 = CurveEvaluate<Sexy::SexyVector3>
                         (fVar9,in_x0 + 0x1ac,in_x0 + 0x1b8,*(undefined4 *)(in_x0 + 0x1d0));
    local_14 = fVar10;
    (**(code **)(*(long *)in_x0 + 0x78))();
    bVar1 = 1.0 < fVar9;
    break;
  case 4:
    fVar9 = (float)PVZ_T();
    this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8);
    fVar10 = *(float *)(in_x0 + 0x18c);
    fVar11 = (fVar9 - fVar10) / *(float *)(in_x0 + 0x1cc);
    local_18 = CurveEvaluate<Sexy::SexyVector3>
                         (fVar11,in_x0 + 0x1ac,in_x0 + 0x1b8,*(undefined4 *)(in_x0 + 0x1d0));
    local_14 = fVar10;
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar9 = CurveEvaluate<float>(fVar11,in_x0 + 0x1c4,in_x0 + 0x1c8,*(undefined4 *)(in_x0 + 0x1d0));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    *(float *)(in_x0 + 0xb8) = fVar9 * *(float *)(lVar7 + 0x50);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0xb0));
    if (bVar1) {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xb0));
      (**(code **)(*plVar6 + 0x80))(*(undefined4 *)(in_x0 + 0xb8));
    }
    bVar1 = 1.0 < fVar11;
    cVar2 = IsEndOfLevelReward(in_x0);
    if ((cVar2 != '\0') &&
       (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this), *(char *)(lVar7 + 0x90) != '\0')) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x180));
      if (bVar3) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        pfVar5 = eastl::min_alt<float>((float *)(lVar7 + 0x18),(float *)(lVar4 + 0x1c));
        fVar9 = *pfVar5;
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x180));
        (**(code **)(*plVar6 + 0x80))(fVar11 * 0.025 * fVar9);
      }
    }
    break;
  case 5:
    fVar9 = (float)PVZ_T();
    fVar10 = (fVar9 - *(float *)(in_x0 + 0x18c)) / *(float *)(in_x0 + 0x1cc);
    local_28[0] = 0x3f800000;
    local_18 = 0;
    fVar9 = CurveEvaluate<float>(fVar10,local_28,&local_18,*(undefined4 *)(in_x0 + 0x1d0));
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0xb0));
    if (cVar2 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xb0));
      pcVar8 = *(code **)(*plVar6 + 0x80);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
      (*pcVar8)(fVar9 * *(float *)(lVar7 + 0x50),plVar6);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
      *(float *)(in_x0 + 0xb8) = fVar9 * *(float *)(lVar7 + 0x50);
    }
    if (fVar10 <= 1.0) goto switchD_03c601dc_default;
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(in_x0 + 0xbc),0x20);
    if (bVar1) {
      bVar1 = true;
      goto LAB_03c601e4;
    }
    goto LAB_03c601f0;
  }
  bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(in_x0 + 0xbc),0x20);
  if (bVar3) {
LAB_03c601e4:
    SnapToBoard(in_x0);
  }
  if (bVar1) {
LAB_03c601f0:
    (**(code **)(*(long *)in_x0 + 0x220))();
  }
LAB_03c60198:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::StaticClassInit() */

void Collectable::StaticClassInit(void)

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
  Delegate1<CollectableState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CollectableState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"Collectable");
      (*pcVar4)(plVar1,asStack_150,FUN_03c6086c,0x1f0,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CollectableState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<CollectableState>::Delegate1<Collectable,void(Collectable::*)(CollectableState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<Collectable,void(Collectable::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<CollectableState>::Delegate1<Collectable,void(Collectable::*)(CollectableState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_Idle");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c60568(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<CollectableState>::Delegate1<Collectable,void(Collectable::*)(CollectableState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<Collectable,void(Collectable::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<CollectableState>::Delegate1<Collectable,void(Collectable::*)(CollectableState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_Collecting");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c60568(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Collectable::StaticGetClass() */

long * Collectable::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Collectable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Collectable::GetClass() const */

long * Collectable::GetClass(void)

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
  (*pcVar3)(plVar1,"Collectable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::setCollectableStateSerialization(int) */

void __thiscall Collectable::setCollectableStateSerialization(Collectable *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CollectableState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CollectableState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CollectableState>::GetStateDefinition
                     ((StateMachineTable<CollectableState> *)pSVar2,param_1);
  StateDefinition<CollectableState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CollectableState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 200),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::setState(CollectableState) */

void __thiscall Collectable::setState(Collectable *this,int param_2)

{
  int iVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  StateDefinition *pSVar4;
  undefined4 uVar5;
  StateDefinition<CollectableState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03c5dbd8(*(undefined4 *)(this + 200));
  if (iVar1 != param_2) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar2 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar3 = StateMachineTableBuilder::GetTable<CollectableState>(this_00,pRVar2);
    pSVar4 = (StateDefinition *)
             StateMachineTable<CollectableState>::GetStateDefinition
                       ((StateMachineTable<CollectableState> *)pSVar3,param_2);
    StateDefinition<CollectableState>::StateDefinition(aSStack_a8,pSVar4);
    StateDefinition<CollectableState>::SetContext(aSStack_a8,this);
    StateMachine<CollectableState>::SetState
              ((StateMachine<CollectableState> *)(this + 200),(StateDefinition *)aSStack_a8);
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x168) = uVar5;
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::CollectableInitialize(Sexy::RtWeakPtr<CollectableType const>) */

void __thiscall Collectable::CollectableInitialize(Collectable *this,RtWeakPtr *param_2)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),param_2);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xc0) = uVar1;
  (**(code **)(*(long *)this + 0x230))(this);
  playSpawnedSound(this);
  setState(this,0);
  if (*(code **)(*(long *)this + 0x208) != onCollectableInitialize) {
    (**(code **)(*(long *)this + 0x208))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Collectable::StartCollect(bool) */

void __thiscall Collectable::StartCollect(Collectable *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  PopAnimRig *this_02;
  long *plVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsCollecting(this);
  if (cVar1 == '\0') {
    setState(this,1);
    playCollectSound(this);
    SetKeepOnBoard(this,false);
    SetFlag<DebugLogFlags>(this + 0xbc,2,param_1);
    MessageRouter::Post<Collectable*,Collectable*>
              ((MessageRouter *)gMessageRouter,Message::CollectableCollectionStarted,this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
    ;
    if (*(char *)(lVar3 + 0x90) != '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
      if (bVar2) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
        (**(code **)(*plVar5 + 0x48))();
      }
    }
    cVar1 = IsEndOfLevelReward(this);
    if ((cVar1 != '\0') &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8)),
       *(char *)(lVar3 + 0x90) != '\0')) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      nop();
      std::string::string(asStack_10,"POPANIM_EFFECTS_PRIZE_RAYS");
      GetPAMByName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_01,true);
      std::string::string(asStack_10,"animation");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      this_02 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
      PopAnimRig::SetAdditiveDraw(this_02,true);
      if (this_00 != (Effect_PopAnim *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x180),
                   (RtWeakPtrBase *)asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)asStack_10);
        StandaloneEffect::SetAttached
                  ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector2 *)asStack_10,-2);
        StandaloneEffect::SetDestroyWhenUnattached((StandaloneEffect *)this_00,true);
        (**(code **)(*(long *)this_00 + 0x80))(0,this_00);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Collectable::CalcRenderOrder() const */

undefined8 __thiscall Collectable::CalcRenderOrder(Collectable *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
    ;
    uVar4 = FUN_03c5dbb0(*(undefined4 *)(lVar3 + 0x1c),lVar3 + 0x20);
    return uVar4;
  }
  cVar2 = IsEndOfLevelReward(this);
  if (cVar2 != '\0') {
    return 500000;
  }
  uVar4 = BoardEntity::CalcRenderOrder((BoardEntity *)this);
  return uVar4;
}


/* non-virtual thunk to Collectable::CalcRenderOrder() const */

void __thiscall Collectable::CalcRenderOrder(Collectable *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}

