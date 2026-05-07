// Class: StarvingChomper


/* StarvingChomper::onDestroy() */

void __thiscall StarvingChomper::onDestroy(StarvingChomper *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* StarvingChomper::CalcRenderOrder() const */

void __thiscall StarvingChomper::CalcRenderOrder(StarvingChomper *this)

{
  long lVar1;
  
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Board::MakeRenderOrder(0x64d48,0,(int)*(float *)(lVar1 + 4));
  return;
}


/* non-virtual thunk to StarvingChomper::CalcRenderOrder() const */

void __thiscall StarvingChomper::CalcRenderOrder(StarvingChomper *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* StarvingChomper::getState() */

void __thiscall StarvingChomper::getState(StarvingChomper *this)

{
  FUN_04a185a4(*(undefined4 *)(this + 0xc0));
  return;
}


/* StarvingChomper::isInState(StarvingChomperState) const */

bool __thiscall StarvingChomper::isInState(StarvingChomper *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04a185a4(*(undefined4 *)(this + 0xc0));
  return iVar1 == param_2;
}


/* StarvingChomper::~StarvingChomper() */

void __thiscall StarvingChomper::~StarvingChomper(StarvingChomper *this)

{
  *(undefined ***)this = &PTR_GetClass_0692ee00;
  *(undefined ***)(this + 0x10) = &PTR__StarvingChomper_0692f030;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to StarvingChomper::~StarvingChomper() */

void __thiscall StarvingChomper::~StarvingChomper(StarvingChomper *this)

{
  ~StarvingChomper(this + -0x10);
  return;
}


/* StarvingChomper::~StarvingChomper() */

void __thiscall StarvingChomper::~StarvingChomper(StarvingChomper *this)

{
  ~StarvingChomper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StarvingChomper::~StarvingChomper() */

void __thiscall StarvingChomper::~StarvingChomper(StarvingChomper *this)

{
  ~StarvingChomper(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::onDraw(Sexy::Graphics*) */

void __thiscall StarvingChomper::onDraw(StarvingChomper *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04a1858c(this[0xa2]);
  if (cVar1 != '\0') {
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0);
    this_01 = (RtWeakPtr *)(this + 0xb8);
    fVar6 = (float)FUN_04a1863c(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar8 = *(float *)(param_1 + 0x20);
    fVar6 = (float)FUN_04a187f4(fVar6 + 20.0);
    fVar9 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar8 +
         (float)(int)((fVar6 - fVar8) * *(float *)(param_1 + 0x18));
    fVar6 = (float)FUN_04a187f4(uVar7 & 0xffffffff);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar9 +
         (float)(int)((fVar6 - fVar9) * *(float *)(param_1 + 0x1c));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
    }
    iVar3 = FUN_04a187e0(0x76);
    iVar4 = FUN_04a187e0(0x73);
    Sexy::Graphics::Translate(param_1,-iVar3,-iVar4);
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar5);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar5);
    }
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::Draw(pPVar5,param_1);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PopAnimRig::Draw(pPVar5,param_1);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::initializePAM(Sexy::PopAnim*, Sexy::PopAnim*) */

void __thiscall
StarvingChomper::initializePAM(StarvingChomper *this,PopAnim *param_1,PopAnim *param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_40,"custom_01");
  PopAnimRig::SetLayerVisibility(pPVar3,(string *)aRStack_40,false);
  std::string::~string((string *)aRStack_40);
  nop();
  if (param_2 != (PopAnim *)0x0) {
    pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig(param_2,pRVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string((string *)aRStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,aRStack_40,0,aDStack_38);
    std::string::~string((string *)aRStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarvingChomper::onEnterState_INIT(StarvingChomperState) */

void StarvingChomper::onEnterState_INIT(long param_1)

{
  undefined4 uVar1;
  
  FUN_04a18584(param_1 + 0xa2,0);
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  return;
}


/* StarvingChomper::Update() */

void __thiscall StarvingChomper::Update(StarvingChomper *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  StateMachine<StarvingChomperState>::UpdateState
            ((StateMachine<StarvingChomperState> *)(this + 0xc0));
  return;
}


/* StarvingChomper::onUpdate() */

void __thiscall StarvingChomper::onUpdate(StarvingChomper *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  StateMachine<StarvingChomperState>::UpdateState
            ((StateMachine<StarvingChomperState> *)(this + 0xc0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::updateState_INIT() */

void __thiscall StarvingChomper::updateState_INIT(StarvingChomper *this)

{
  PopAnimRig *pPVar1;
  Board *pBVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  fVar3 = *(float *)(this + 0xac);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (fVar3 + 2.0 <= fVar4) {
    FUN_04a18584(this + 0xa2,1);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0xac) = uVar5;
    if (this[0xa1] != (StarvingChomper)0x0) {
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aCStack_50,L"[STARVING_CHOMPER_SPAWNED]",asStack_58);
      Board::DisplayAdviceAgain(pBVar2,aCStack_50,0x1a,0);
      FUN_05476c50(aCStack_50);
      nop();
    }
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_58,"appear");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<StarvingChomper,void(StarvingChomper::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::onEnterState_STARVING(StarvingChomperState) */

void StarvingChomper::onEnterState_STARVING(ReceivedDataCallback *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xb0));
  if ((bVar1) && (*(int *)(param_1 + 0xa4) == 3)) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    std::string::string(asStack_58,"special_end");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<StarvingChomper,void(StarvingChomper::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xb8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8));
    std::string::string(asStack_50,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::onEnterState_EATING(StarvingChomperState) */

void StarvingChomper::onEnterState_EATING(ReceivedDataCallback *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = PVZ_T();
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xb0));
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    std::string::string(asStack_58,"bite");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<StarvingChomper,void(StarvingChomper::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xb8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8));
    std::string::string(asStack_50,"idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::StarvingChomper() */

void __thiscall StarvingChomper::StarvingChomper(StarvingChomper *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692ee00;
  *(undefined ***)(this + 0x10) = &PTR__StarvingChomper_0692f030;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  StateMachine<StarvingChomperState>::StateMachine
            ((StateMachine<StarvingChomperState> *)(this + 0xc0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0xa4) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarvingChomper::StaticNew() */

StarvingChomper * StarvingChomper::StaticNew(void)

{
  StarvingChomper *this;
  
  this = ::operator_new(0x160);
  StarvingChomper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::StaticClassInit() */

void StarvingChomper::StaticClassInit(void)

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
  Delegate1<StarvingChomperState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<StarvingChomperState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"StarvingChomper");
      (*pcVar4)(plVar1,asStack_150,FUN_04a1a040,0x160,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<StarvingChomperState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<StarvingChomper,void(StarvingChomper::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StarvingChomperState_INIT");
  StateDefinition<StarvingChomperState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a19b4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<StarvingChomper,void(StarvingChomper::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StarvingChomperState_STARVING");
  StateDefinition<StarvingChomperState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a19b4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<StarvingChomper,void(StarvingChomper::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<StarvingChomperState>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(StarvingChomperState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StarvingChomperState_EATING");
  StateDefinition<StarvingChomperState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a19b4c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StarvingChomper::StaticGetClass() */

long * StarvingChomper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarvingChomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarvingChomper::GetClass() const */

long * StarvingChomper::GetClass(void)

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
  (*pcVar3)(plVar1,"StarvingChomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::setStarvingChomperStateSerialization(int) */

void __thiscall
StarvingChomper::setStarvingChomperStateSerialization(StarvingChomper *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<StarvingChomperState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<StarvingChomperState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<StarvingChomperState>::GetStateDefinition
                     ((StateMachineTable<StarvingChomperState> *)pSVar2,param_1);
  StateDefinition<StarvingChomperState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<StarvingChomperState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xc0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::setState(StarvingChomperState) */

void __thiscall StarvingChomper::setState(StarvingChomper *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<StarvingChomperState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<StarvingChomperState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<StarvingChomperState>::GetStateDefinition
                     ((StateMachineTable<StarvingChomperState> *)pSVar2,param_2);
  StateDefinition<StarvingChomperState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<StarvingChomperState>::SetContext(aSStack_a8,this);
  StateMachine<StarvingChomperState>::SetState
            ((StateMachine<StarvingChomperState> *)(this + 0xc0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::StarvingChomperInitialize(Sexy::PopAnim*, Sexy::PopAnim*, bool) */

void __thiscall
StarvingChomper::StarvingChomperInitialize
          (StarvingChomper *this,PopAnim *param_1,PopAnim *param_2,bool param_3)

{
  int iVar1;
  float local_18;
  float local_14;
  long local_8;
  
  this[0xa1] = (StarvingChomper)param_3;
  local_8 = ___stack_chk_guard;
  setState(this,0);
  initializePAM(this,param_1,param_2);
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 810.5 - (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar1;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarvingChomper::updateState_EATING() */

void __thiscall StarvingChomper::updateState_EATING(StarvingChomper *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = *(float *)(this + 0xa8);
  fVar2 = (float)PVZ_T();
  if (fVar2 < fVar1 + 3.0) {
    return;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0xa8) = uVar3;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::PlayIdleLooped() */

void __thiscall StarvingChomper::PlayIdleLooped(StarvingChomper *this)

{
  long lVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06b78a38);
  if (lVar1 == 0) {
    std::string::string(asStack_50,"idle");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06b78a38,asStack_50,0x31);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"idle2");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06b78a38,asStack_50,0x2f);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"idle3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06b78a38,asStack_50,3);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"idle4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06b78a38,asStack_50,1);
    std::string::~string(asStack_50);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<StarvingChomper,void(StarvingChomper::*)(std::string_const&)>(aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarvingChomper::onAnimStopped(std::string const&) */

void __thiscall StarvingChomper::onAnimStopped(StarvingChomper *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("appear",param_1);
  if (bVar1) {
    setState(this,1);
    cVar2 = isInState(this,1);
  }
  else {
    cVar2 = isInState(this,1);
  }
  if (cVar2 == '\0') {
    if (*(int *)(this + 0xa4) == 1) {
      *(undefined4 *)(this + 0xa4) = 2;
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::DodoriderKilled,true);
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      std::string::string(asStack_58,"special");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<StarvingChomper,void(StarvingChomper::*)(std::string_const&)>
                ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    else if (*(int *)(this + 0xa4) == 2) {
      *(undefined4 *)(this + 0xa4) = 3;
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      std::string::string(asStack_50,"special_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_50,0,aDStack_38);
      std::string::~string(asStack_50);
      nop();
    }
  }
  else {
    PlayIdleLooped(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

