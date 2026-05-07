// Class: RunningPlayer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::GetDrawOffet() */

void RunningPlayer::GetDrawOffet(void)

{
  int iVar1;
  int iVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_033e9e70(0x89);
  iVar2 = FUN_033e9e70(0xa0);
  Sexy::FastCurve::SetOutRange(local_10,(float)-iVar1,(float)-iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* RunningPlayer::CalcRenderOrder() const */

void __thiscall RunningPlayer::CalcRenderOrder(RunningPlayer *this)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Board::MakeRenderOrder(600000,0,(int)*(float *)(lVar1 + 4));
  return;
}


/* non-virtual thunk to RunningPlayer::CalcRenderOrder() const */

void __thiscall RunningPlayer::CalcRenderOrder(RunningPlayer *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* RunningPlayer::onExitState_PREPARERUN(RunningPlayerState) */

void RunningPlayer::onExitState_PREPARERUN(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RunningPlayer::isInState(RunningPlayerState) const */

bool __thiscall RunningPlayer::isInState(RunningPlayer *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_033e9700(*(undefined4 *)(this + 200));
  return iVar1 == param_2;
}


/* RunningPlayer::getRunningPlayerStateSerialization() */

void __thiscall RunningPlayer::getRunningPlayerStateSerialization(RunningPlayer *this)

{
  FUN_033e9700(*(undefined4 *)(this + 200));
  return;
}


/* RunningPlayer::canMove() */

byte __thiscall RunningPlayer::canMove(RunningPlayer *this)

{
  return (byte)this[0xc4] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::onEnterState_DEAD(RunningPlayerState) */

void RunningPlayer::onEnterState_DEAD(FlyingFireball *param_1)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x1e8);
  std::string::string(asStack_10,"");
  (*pcVar1)(param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FlyingFireball::SetSpawnsDragonImp(param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::CalcRealGridPosition() const */

void __thiscall RunningPlayer::CalcRealGridPosition(RunningPlayer *this)

{
  long lVar1;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point(in_x8,local_10 + 2,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::GetRunningPlayerRect() */

void RunningPlayer::GetRunningPlayerRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  if (((DAT_06a9eb00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9eb00), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06a9e7f8 = iVar2 / 2 + -5;
    __cxa_guard_release(&DAT_06a9eb00);
  }
  if (((DAT_06a9eb08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9eb08), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06a9e7fc = iVar2 / 2 + -6;
    __cxa_guard_release(&DAT_06a9eb08);
  }
  if (((DAT_06a9e658 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9e658), iVar2 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06a9ebe8 = iVar2 + -10;
    __cxa_guard_release(&DAT_06a9e658);
  }
  iVar2 = DAT_06a9e910;
  if (((DAT_06a9e8f0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06a9e8f0), iVar2 = DAT_06a9e910, iVar1 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    DAT_06a9e910 = iVar2 + -0xc;
    __cxa_guard_release(&DAT_06a9e8f0);
    iVar2 = iVar2 + -0xc;
  }
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_033e985c(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar3 - (float)DAT_06a9e7f8),(int)(fVar4 - (float)DAT_06a9e7fc),
             DAT_06a9ebe8,iVar2);
  return;
}


/* RunningPlayer::~RunningPlayer() */

void __thiscall RunningPlayer::~RunningPlayer(RunningPlayer *this)

{
  *(undefined ***)this = &PTR_GetClass_0661d2c0;
  *(undefined ***)(this + 0x10) = &PTR__RunningPlayer_0661d538;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 200));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to RunningPlayer::~RunningPlayer() */

void __thiscall RunningPlayer::~RunningPlayer(RunningPlayer *this)

{
  ~RunningPlayer(this + -0x10);
  return;
}


/* RunningPlayer::~RunningPlayer() */

void __thiscall RunningPlayer::~RunningPlayer(RunningPlayer *this)

{
  ~RunningPlayer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RunningPlayer::~RunningPlayer() */

void __thiscall RunningPlayer::~RunningPlayer(RunningPlayer *this)

{
  ~RunningPlayer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::onDraw(Sexy::Graphics*) */

void __thiscall RunningPlayer::onDraw(RunningPlayer *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar4 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_033e985c(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_033e9f00(uVar2);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_033e9f00(uVar4 & 0xffffffff);
  fVar3 = *(float *)(param_1 + 0x14) + fVar6 +
          (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x14) = fVar3;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
  (**(code **)(*(long *)this + 0x1d8))(this);
  Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar3);
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
/* RunningPlayer::PlayBoardRush() */

void __thiscall RunningPlayer::PlayBoardRush(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"hb_idle");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onJumpOnBoard(std::string const&) */

void RunningPlayer::onJumpOnBoard(string *param_1)

{
  PlayBoardRush((RunningPlayer *)param_1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::WalkToNext() */

void __thiscall RunningPlayer::WalkToNext(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  std::string::string(asStack_40,"run");
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


/* RunningPlayer::onJumpOffBoard(std::string const&) */

void RunningPlayer::onJumpOffBoard(string *param_1)

{
  WalkToNext((RunningPlayer *)param_1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::onEnterState_RUN(RunningPlayerState) */

void RunningPlayer::onEnterState_RUN(long param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x170));
  std::string::string(asStack_40,"run");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onDestroy() */

void __thiscall RunningPlayer::onDestroy(RunningPlayer *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::initializePAM(Sexy::PopAnim*) */

void __thiscall RunningPlayer::initializePAM(RunningPlayer *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x170);
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


/* RunningPlayer::Update() */

void __thiscall RunningPlayer::Update(RunningPlayer *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  StateMachine<RunningPlayerState>::UpdateState((StateMachine<RunningPlayerState> *)(this + 200));
  return;
}


/* RunningPlayer::onUpdate() */

void __thiscall RunningPlayer::onUpdate(RunningPlayer *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  StateMachine<RunningPlayerState>::UpdateState((StateMachine<RunningPlayerState> *)(this + 200));
  return;
}


/* RunningPlayer::StartMove() */

void __thiscall RunningPlayer::StartMove(RunningPlayer *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xbc) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::updateState_RUN() */

void __thiscall RunningPlayer::updateState_RUN(RunningPlayer *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar4 = *(float *)(this + 0xbc);
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_EOT();
  if (fVar4 != fVar1) {
    fVar2 = *(float *)(this + 0xc0);
    fVar3 = (float)PVZ_T();
    if (fVar4 + fVar2 <= fVar3) {
      (**(code **)(*(long *)this + 0x78))(this,this + 0xb0);
      *(float *)(this + 0xbc) = fVar1;
      FlyingFireball::SetSpawnsDragonImp((FlyingFireball *)this,false);
    }
    else {
      fVar1 = (float)PVZ_T();
      fVar1 = (fVar1 - *(float *)(this + 0xbc)) / *(float *)(this + 0xc0);
      DVec3::DVec3((DVec3 *)&local_18);
      local_18 = *(float *)(this + 0xa4) +
                 (*(float *)(this + 0xb0) - *(float *)(this + 0xa4)) * fVar1;
      local_14 = *(float *)(this + 0xa8) +
                 (*(float *)(this + 0xb4) - *(float *)(this + 0xa8)) * fVar1;
      local_10 = 0;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::PlayIdleLooped() */

void __thiscall RunningPlayer::PlayIdleLooped(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onEnterState_IDLE(RunningPlayerState) */

void RunningPlayer::onEnterState_IDLE(FlyingFireball *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x170));
  if ((bVar1) && (cVar2 = isInState((RunningPlayer *)param_1,0), cVar2 != '\0')) {
    PlayIdleLooped((RunningPlayer *)param_1);
    FlyingFireball::SetSpawnsDragonImp(param_1,false);
    return;
  }
  FlyingFireball::SetSpawnsDragonImp(param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::PlayJumpOut() */

void __thiscall RunningPlayer::PlayJumpOut(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"jump_out");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onEnterState_JUMPOUT(RunningPlayerState) */

void RunningPlayer::onEnterState_JUMPOUT(RunningPlayer *param_1)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x170));
  if (!bVar1) {
    return;
  }
  PlayJumpOut(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::PlayPrepareRun() */

void __thiscall RunningPlayer::PlayPrepareRun(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"ready");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onEnterState_PREPARERUN(RunningPlayerState) */

void RunningPlayer::onEnterState_PREPARERUN(RunningPlayer *param_1)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x170));
  if (!bVar1) {
    return;
  }
  PlayPrepareRun(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::PlayJumpOffBoard() */

void __thiscall RunningPlayer::PlayJumpOffBoard(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Jump03");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJumpOffBoard);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::PlayJumpOnBoard() */

void __thiscall RunningPlayer::PlayJumpOnBoard(RunningPlayer *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Jump02");
  nop();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJumpOnBoard);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::SetInSpecial(bool) */

void __thiscall RunningPlayer::SetInSpecial(RunningPlayer *this,bool param_1)

{
  this[0x168] = (RunningPlayer)param_1;
  if (!param_1) {
    PlayJumpOffBoard(this);
    return;
  }
  PlayJumpOnBoard(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::RunningPlayer() */

void __thiscall RunningPlayer::RunningPlayer(RunningPlayer *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0661d2c0;
  *(undefined ***)(this + 0x10) = &PTR__RunningPlayer_0661d538;
  DVec3::DVec3((DVec3 *)(this + 0xa4));
  DVec3::DVec3((DVec3 *)(this + 0xb0));
  StateMachine<RunningPlayerState>::StateMachine((StateMachine<RunningPlayerState> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  this[0xc4] = (RunningPlayer)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x168] = (RunningPlayer)0x0;
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xbc) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::StaticNew() */

RunningPlayer * RunningPlayer::StaticNew(void)

{
  RunningPlayer *this;
  
  this = ::operator_new(0x178);
  RunningPlayer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::StaticClassInit() */

void RunningPlayer::StaticClassInit(void)

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
  Delegate1<RunningPlayerState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<RunningPlayerState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"RunningPlayer");
      (*pcVar4)(plVar1,asStack_150,FUN_033f6b10,0x178,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<RunningPlayerState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RunningPlayerState_IDLE");
  StateDefinition<RunningPlayerState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033f5c6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RunningPlayerState_JUMPOUT");
  StateDefinition<RunningPlayerState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033f5c6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RunningPlayerState_PREPARE_RUN");
  StateDefinition<RunningPlayerState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033f5c6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RunningPlayerState_RUN");
  StateDefinition<RunningPlayerState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033f5c6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate0::Delegate0<RunningPlayer,void(RunningPlayer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate1<RunningPlayerState>::
  Delegate1<RunningPlayer,void(RunningPlayer::*)(RunningPlayerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RunningPlayerState_DEAD");
  StateDefinition<RunningPlayerState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033f5c6c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RunningPlayer::StaticGetClass() */

long * RunningPlayer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RunningPlayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningPlayer::GetClass() const */

long * RunningPlayer::GetClass(void)

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
  (*pcVar3)(plVar1,"RunningPlayer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::setState(RunningPlayerState) */

void __thiscall RunningPlayer::setState(RunningPlayer *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RunningPlayerState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RunningPlayerState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RunningPlayerState>::GetStateDefinition
                     ((StateMachineTable<RunningPlayerState> *)pSVar2,param_2);
  StateDefinition<RunningPlayerState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RunningPlayerState>::SetContext(aSStack_a8,this);
  StateMachine<RunningPlayerState>::SetState
            ((StateMachine<RunningPlayerState> *)(this + 200),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningPlayer::onAnimStopped(std::string const&) */

void RunningPlayer::onAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = isInState((RunningPlayer *)param_1,0);
  if (cVar1 != '\0') {
    PlayIdleLooped((RunningPlayer *)param_1);
    return;
  }
  cVar1 = isInState((RunningPlayer *)param_1,1);
  if (cVar1 != '\0') {
    setState((RunningPlayer *)param_1,2);
    return;
  }
  cVar1 = isInState((RunningPlayer *)param_1,2);
  if (cVar1 != '\0') {
    setState((RunningPlayer *)param_1,3);
    return;
  }
  cVar1 = isInState((RunningPlayer *)param_1,4);
  if (cVar1 == '\0') {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::RunningPlayerInitialize(Sexy::PopAnim*) */

void __thiscall RunningPlayer::RunningPlayerInitialize(RunningPlayer *this,PopAnim *param_1)

{
  bool bVar1;
  int iVar2;
  string asStack_20 [8];
  float local_18;
  float local_14;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  (**(code **)(*(long *)this + 0x1e0))(this,param_1);
  DVec3::DVec3((DVec3 *)&local_18);
  FlyingFireball::SetSpawnsDragonImp((FlyingFireball *)this,false);
  bVar1 = std::operator==(asStack_20,"Large");
  iVar2 = -2;
  if (bVar1) {
    iVar2 = -1;
  }
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
  local_18 = (float)iVar2;
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar2;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  setState(this,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningPlayer::setRunningPlayerStateSerialization(int) */

void __thiscall RunningPlayer::setRunningPlayerStateSerialization(RunningPlayer *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RunningPlayerState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RunningPlayerState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RunningPlayerState>::GetStateDefinition
                     ((StateMachineTable<RunningPlayerState> *)pSVar2,param_1);
  StateDefinition<RunningPlayerState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RunningPlayerState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 200),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

